/*	Author: lab
 *  Partner(s) Name: 
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
        DDRB = 0xFF; PORTB = 0x00;
        DDRC = 0xFF; PORTC = 0x00;

        unsigned char tempA = 0x00;
        unsigned char tempB = 0x00;
        
    /* Insert your solution below */
    while (1) {
	tempA = 0x00; tempB = 0x00;

	tempB = (PINA & 0x0F) << 4;

	tempA = (PINA & 0xF0) >> 4;
	
	PORTB = tempA;
	PORTC = tempB;

    }

    return 1;


   
}
