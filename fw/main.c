#define UART_TX (*(volatile unsigned int*)0x10000000u)

static inline void uart_putc(char c) {
    UART_TX = (unsigned int)(unsigned char)c;
}

int main(void) {
    uart_putc('H');
    uart_putc('i');
    uart_putc('\n');
    while (1) {}
}
