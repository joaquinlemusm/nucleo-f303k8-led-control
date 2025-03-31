#include "stm32f3xx.h"                  // Device header
#include "configuration.h"

#define MASK(x) (1 << x)


int main(void) {
    set_up();
    while (1) {
        if (GPIOA->IDR & MASK(0)) {     // PA0 = 1 (botón presionado, conectado a VCC)
            GPIOB->ODR |= MASK(0);      // Encender LED en PB0
        } else {                        // PA0 = 0 (botón no presionado, pull-down)
            GPIOB->ODR &= ~MASK(0);     // Apagar LED en PB0
        }
	if (GPIOA->IDR & MASK(1)) {     // PA1 = 1 (botón presionado, conectado a VCC)
            GPIOB->ODR |= MASK(7);      // Encender LED en PB0
        } else {                        // PA1 = 0 (botón no presionado, pull-down)
            GPIOB->ODR &= ~MASK(7);     // Apagar LED en PB7
        }
	if (GPIOA->IDR & MASK(3)) {     // PA3 = 1 (botón presionado, conectado a VCC)
            GPIOB->ODR |= MASK(6);      // Encender LED en PB0
        } else {                        // PA3 = 0 (botón no presionado, pull-down)
            GPIOB->ODR &= ~MASK(6);     // Apagar LED en PB6
        }
	if (GPIOA->IDR & MASK(4)) {     // PA4 = 1 (botón presionado, conectado a VCC)
            GPIOB->ODR |= MASK(1);      // Encender LED en PB0
        } else {                        // PA1 = 0 (botón no presionado, pull-down)
            GPIOB->ODR &= ~MASK(1);     // Apagar LED en PB1
        }
	if (GPIOA->IDR & MASK(7)) {     // PA7 = 1 (botón presionado, conectado a VCC)
            GPIOB->ODR |= MASK(5);      // Encender LED en PB0
        } else {                        // PA7 = 0 (botón no presionado, pull-down)
            GPIOB->ODR &= ~MASK(5);     // Apagar LED en PB5
        }
    }
}
