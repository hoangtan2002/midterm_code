/*
 * buttons.h
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */

#ifndef INC_BUTTONS_H_
#define INC_BUTTONS_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

int isButton1LongPressed();
int isButton2LongPressed();
int isButton3LongPressed();

void getKeyInput1();

#endif /* INC_BUTTONS_H_ */
