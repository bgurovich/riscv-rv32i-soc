#pragma once
#include <stdint.h>

static inline void uart_putc(char c) {
    (*(volatile uint32_t*)0x10000000u) = (uint32_t)(uint8_t)c;
}

static inline void uart_puts(const char *s) {
    while (*s) uart_putc(*s++);
}

static inline void uart_puthex(uint32_t v) {
    const char *hex = "0123456789ABCDEF";
    for (int i = 7; i >= 0; i--)
        uart_putc(hex[(v >> (i*4)) & 0xF]);
}