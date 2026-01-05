#include "uart.h"
#include <stdint.h>

static void check(const char *name, uint32_t got, uint32_t exp) {
    uart_puts(name);
    uart_puts(": ");
    if (got == exp) uart_puts("PASS\n");
    else{
        uart_puts("FAIL got=0x"); uart_puthex(got);
        uart_puts(" exp=0x"); uart_puthex(exp);
        uart_puts("\n");
    }
}

static void test_branch_flush(void){
    uart_puts("branch/flush: ");

    volatile int x = 0;
    for (int i = 0; i < 5; i++) x++;

    if (x == 5) uart_puts("PASS\n");
    else uart_puts("FAIL\n");
}

static void test_load_use(void){
    uart_puts("load-use: ");
    volatile unsigned int a[2] = {0x12345678, 0};
    volatile unsigned int y = a[0]; // load
    volatile unsigned int z = y + 1; // immediate use
    if (z == 0x12345679) uart_puts("PASS\n");
    else uart_puts("FAIL\n");
}

static void test_mul(void){
    uart_puts("mul: ");
    volatile int a = 7, b = 6;
    volatile int c = a * b;
    if (c == 42) uart_puts("PASS\n");
    else uart_puts("FAIL\n");
}

static void test_mul_neg(void){
    uart_puts("mulneg: ");
    volatile int a = -3, b = 9;
    volatile int c = a * b;
    if (c == -27) uart_puts("PASS\n");
    else uart_puts("FAIL\n");
}

int main(void)  {
    uart_puts ("RV32I bring-up tests\n");

    // ALU-ish sanity (compiler emits real instrucitons)
    volatile uint32_t a = 10, b = 3;
    check("add", a + b, 13);
    check("sub", a - b, 7);
    check("xor", a ^ b, 9);
    check("and", a & b, 2);
    check("or ", a | b, 11);

    // Load/store byte test
    volatile uint8_t buf[4] = {0};
    buf[0] = 0x12;
    buf[1] = 0xAB;
    check("lbu0", buf[0], 0x12);
    check("lbu1", buf[1], 0xAB);

    test_branch_flush();
    test_load_use();

    test_mul();
    test_mul_neg();

    uart_puts("DONE\n");
    while (1) {}
}