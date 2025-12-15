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

    uart_puts("DONE\n");
    while (1) {}
}