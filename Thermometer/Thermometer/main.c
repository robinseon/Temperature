/*
 * Thermometer.c
 *
 * Created: 19/03/2022 11:17:49
 * Author : robin
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "Driver/adc.h"
#include "Driver/led.h"

uint16_t temperature;
		
int main(void)
{	
	// initialize led
	lightbar_init();
	// initialize timer
	time_init();
	// initialize ADC
	adc_init();	

	
	while(1)
	{
		
	}
}
