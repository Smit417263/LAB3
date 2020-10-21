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

        DDRB = 0xFE; PORTB = 0x01;
        DDRD = 0x00; PORTD = 0xFF;

        unsigned char tempB = 0x00;
        unsigned char tempD = 0x00;
	unsigned char temp = 0x00;
        
    /* Insert your solution below */
    while (1) {

	tempD = PIND;    
	tempB = PINB & 0x01;
	temp = 0x00;

	if(tempD >= 70 && tempB == 0 || tempD >= 69 && tempB == 1){
		temp = 0x02;
	}
	else if(tempD > 5 && tempB == 0 || tempD > 4 && tempB == 1){  // don't need to check if its greater than 70
		temp = 0x04;
	}
	else{
		temp = 0x00;
	}

	PORTB = tempB | temp;



    }

    return 1;


   
}
