/*
 * fsm_manual.c
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */
#include "fsm_manual.h"

void fsmState1(){
	if(isButton2Pressed() == 1 && isButton2LongPressed() == 0){
		ledBuffer++;
		if(ledBuffer == 10) ledBuffer = 1;
		setTimer2(1000);
	}
	if(isButton3Pressed() == 1 && isButton2LongPressed() == 0){
		ledBuffer--;
		if(ledBuffer == 0) ledBuffer = 9;
		setTimer2(1000);
	}
	if(isButton1Pressed() == 1){
		ledBuffer = 1;
		setTimer2(1000);
	}
}

void fsmState2(){
	if(isButton2LongPressed() == 1 && isButton2Pressed() == 0){
		ledBuffer++;
		if(ledBuffer == 10) ledBuffer = 1;
		setTimer2(1000);
	}
	if(isButton3LongPressed() == 1 && isButton3Pressed() == 0){
		ledBuffer--;
		if(ledBuffer == 0) ledBuffer = 9;
		setTimer2(1000);
	}
}


void fsmState3(){
	if(timer2_flag==0){
		return;
	}
	if(timer3_flag==1){
		ledBuffer--;
		if(ledBuffer ==0) ledBuffer = 9;
		setTimer3(100);
	}
}



