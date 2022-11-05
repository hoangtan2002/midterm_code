/*
 * led.c
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */

#include "led.h"

void blinkREDLED(){
	  if(timer1_flag==1){
		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		  setTimer1(100);
	  }
	  else return;
}

