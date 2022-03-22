/*
 * lightbar.h
 *
 * Created: 19/03/2022 11:51:47
 *  Author: robin
 */ 


#ifndef LIGHTBAR_H_
#define LIGHTBAR_H_

void time_init();
void adc_read();
void adc_init();
int16_t temp_convertToCelcius();



#endif /* LIGHTBAR_H_ */