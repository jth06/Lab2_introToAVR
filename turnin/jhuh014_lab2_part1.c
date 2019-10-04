/*	Author: jhuh014
 *  Partner(s) Name: Alex DeVictoria
 *	Lab Section: 23
 *	Assignment: Lab 2  Exercise 1
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
    DDRB = 0xFF; PORTB = 0x00; // Initialize PORTB output to 0’s
    unsigned char tmpB = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpC = 0x00;
    
    /* Insert your solution below */
    while (1) {
        tmpA = PINA & 0x02;

        if (tmpA != 0x02) {
            tmpB = PINA & 0x01;

            if (tmpB == 0x01) {
                tmpC = 0x01;
            }

            else {
                tmpC = 0x00;
            }
        }

        else {
            tmpC = 0x00;
        }

        PORTB = tmpC;
    }
    return 0;
}
