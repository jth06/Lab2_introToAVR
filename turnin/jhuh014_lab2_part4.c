/*	Author: jhuh014
 *  Partner(s) Name: Alex DeVictoria
 *	Lab Section: 23
 *	Assignment: Lab 2  Exercise 3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0x00; PORTC = 0xFF; // Initialize PORTC output to 0’s
    DDRD = 0xFF; PORTD = 0x00;

    
    unsigned short tot = 0x00;

    unsigned char diff = 0x00;
    unsigned char result = 0x00;
    
    /* Insert your solution below */
    while (1) {
        tot = 0x00;
        diff = 0x00;
        result = 0x00;

        tot = PINA + PINB + PINC;

        if (tot > 140) {
            result = result | 0x01;
        }

        if (PINA >= PINC) {
            diff = PINA - PINC;
        }

        else {
            diff = PINC - PINA;
        }

        if (diff > 80) {
            result = result | 0x02;
        }

        tot = tot >> 2;

        tot = tot << 2;

        result = result | tot;

        PORTD = result;
    }
    return 0;
}
