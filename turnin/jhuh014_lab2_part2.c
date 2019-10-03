/*	Author: jhuh014
 *  Partner(s) Name: Alex DeVictoria
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
    DDRC = 0xFF; PORTC = 0x00; // Initialize PORTB output to 0’s
    unsigned char tmpB = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpC = 0x00;
    unsigned char tmpD = 0x00;
    unsigned char cntavail = 0x00;
    
    /* Insert your solution below */
    while (1) {
        tmpA = PINA & 0x01;
        tmpB = PINA & 0x02;
        tmpC = PINA & 0x04;
        tmpD = PINA & 0x08;
        cntavail = 0x00;

        if (tmpA != 0x01) {
            cntavail = cntavail + 1;
        }

        if (tmpB != 0x02) {
            cntavail = cntavail + 1;
        }

        if (tmpC != 0x04) {
            cntavail = cntavail + 1;
        }

        if (tmpD != 0x08) {
            cntavail = cntavail + 1;
        }
        PORTC = cntavail;
    }
    return 0;
}
