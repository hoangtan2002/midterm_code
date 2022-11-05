/*
 * fsm_manual.c
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */
#include "fsm_manual.h"

void fsmState1(){
	if(isButton2Pressed() == 1){
		ledBuffer++;
		if(ledBuffer == 10) ledBuffer = 1;
		timeOut = 10;
	}
	if(isButton3Pressed() == 1){
		ledBuffer--;
		if(ledBuffer == 0) ledBuffer = 9;
		timeOut = 10;
	}
	if(isButton1Pressed() == 1){
		ledBuffer = 1;
		timeOut = 10;
	}
}

void fsmState2(){
	if(isButton2LongPressed() == 1 && isButton2Pressed() == 0){
		ledBuffer++;
		if(ledBuffer == 10) ledBuffer = 1;
		timeOut = 10;
	}
	if(isButton3LongPressed() == 1 && isButton2Pressed() == 0){
		ledBuffer--;
		if(ledBuffer == 0) ledBuffer = 9;
		timeOut = 10;
	}
}

void countTimeOut(){
	if(timeOut == 10){
		isTimedOut = 0;
	}
	if(timeOut == 0){
		isTimedOut = 1;
	}
	if(timer2_flag==1){
		timeOut--;
		setTimer2(100);
	}
}
void fsmState3(){
	if(isTimedOut == 0){
		return;
	}
	if(timer3_flag==1){
		ledBuffer--;
		if(ledBuffer ==0) ledBuffer = 9;
		setTimer3(100);
	}
}



