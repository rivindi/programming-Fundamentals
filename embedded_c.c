// Simple Embedded C Example: GPIO Toggle
// This code toggles an LED connected to a microcontroller pin.
// Suitable for STM32, AVR, PIC (with slight modifications).

#include <stdint.h>

#define GPIO_PORT   (*(volatile uint32_t*)0x40021014) // Example address
#define GPIO_DIR    (*(volatile uint32_t*)0x40021000)

void delay(volatile uint32_t t) {
    while (t--) { __asm__("nop"); }
}

int main(void) {
    // Configure pin as output
    GPIO_DIR |= (1 << 5); // Pin 5 as output

    while (1) {
        GPIO_PORT ^= (1 << 5);  // Toggle LED
        delay(500000);
    }
}
