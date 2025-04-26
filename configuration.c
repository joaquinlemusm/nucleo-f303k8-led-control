#include "stm32f3xx.h"                  // Device header
#include "configuration.h"

void set_up(void) {
    // Habilitar relojes para GPIOA y GPIOB
    RCC->AHBENR |= RCC_AHBENR_GPIOAEN | RCC_AHBENR_GPIOBEN;

    //////////////////////////////////////////////////////////////
    ////////////////////// LED 1 /////////////////////////////////
    //////////////////////////////////////////////////////////////

    // Configurar PA0 como entrada
    GPIOA->MODER &= ~(0x3);              // PA0 input (00)

    // Configurar PB0 como salida
    GPIOB->MODER &= ~(0x3);              // Limpia PB0
    GPIOB->MODER |= (0x1);               // PB0 output (01)

    // Habilitar pull-down en PA0
    GPIOA->PUPDR &= ~(0x3);              // Limpia PUPDR[1:0]
    GPIOA->PUPDR |= (0x2);               // Pull-down en PA0 (10)

    //////////////////////////////////////////////////////////////
    ////////////////////// LED 2 /////////////////////////////////
    //////////////////////////////////////////////////////////////

    // Configurar PA1 como entrada
    GPIOA->MODER &= ~(0xC);              // PA1 input (00)

    // Configurar PB7 como salida
    GPIOB->MODER &= ~(0xC000);           // Limpia PB7
    GPIOB->MODER |= (0x4000);            // PB7 output (01)

    // Habilitar pull-down en PA1
    GPIOA->PUPDR &= ~(0xC);              // Limpia PUPDR[3:2]
    GPIOA->PUPDR |= (0x8);               // Pull-down en PA1 (10)

    //////////////////////////////////////////////////////////////
    ////////////////////// LED 3 /////////////////////////////////
    //////////////////////////////////////////////////////////////

    // Configurar PA3 como entrada
    GPIOA->MODER &= ~(0xC0);             // PA3 input (00)

    // Configurar PB6 como salida
    GPIOB->MODER &= ~(0x3000);           // Limpia PB6
    GPIOB->MODER |= (0x1000);            // PB6 output (01)

    // Habilitar pull-down en PA3
    GPIOA->PUPDR &= ~(0xC0);             // Limpia PUPDR[7:6]
    GPIOA->PUPDR |= (0x80);              // Pull-down en PA3 (10)

    //////////////////////////////////////////////////////////////
    ////////////////////// LED 4 /////////////////////////////////
    //////////////////////////////////////////////////////////////

    // Configurar PA4 como entrada
    GPIOA->MODER &= ~(0x300);            // PA4 input (00)

    // Configurar PB1 como salida
    GPIOB->MODER &= ~(0xC);              // Limpia PB1
    GPIOB->MODER |= (0x4);               // PB1 output (01)

    // Habilitar pull-down en PA4
    GPIOA->PUPDR &= ~(0x300);            // Limpia PUPDR[9:8]
    GPIOA->PUPDR |= (0x200);             // Pull-down en PA4 (10)

    //////////////////////////////////////////////////////////////
    ////////////////////// LED 5 /////////////////////////////////
    //////////////////////////////////////////////////////////////

    // Configurar PA7 como entrada
    GPIOA->MODER &= ~(0xC000);           // PA7 input (00)

    // Configurar PB5 como salida
    GPIOB->MODER &= ~(0xC00);            // Limpia PB5 [11:10]
    GPIOB->MODER |= (0x400);             // PB5 output (01)

    // Habilitar pull-down en PA7
    GPIOA->PUPDR &= ~(0xC000);           // Limpia PUPDR[15:14]
    GPIOA->PUPDR |= (0x8000);            // Pull-down en PA7 (10)
}
