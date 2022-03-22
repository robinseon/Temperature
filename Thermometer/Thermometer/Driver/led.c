/*
 * Thermometer.c
 *
 * Created: 19/03/2022 11:19:24
 *  Author: robin
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

void lightbar_init()
{
	//PORTA output
	DDRA = 0xff;
	PORTA = 0xff;
}

void lightbar_showTemp(uint16_t temp)
{
	uint8_t nbOfLed;
	uint8_t i=0;
	PORTA |= 0xff;
	if (temp >= 18)
	{
		nbOfLed = temp-17;
		if (nbOfLed>8)
		{
			nbOfLed=8;
		}
		for(i;i<nbOfLed;i++)
		{
			PORTA &= ~(1 << i);
		}
	}
}