/*
 * 7seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */

#include "7seg.h"

void display7SEG(int n){
	int a[10][7] = {
			{0,0,0,0,0,0,1}, //0
			{1,0,0,1,1,1,1}, //1
			{0,0,1,0,0,1,0}, //2
			{0,0,0,0,1,1,0}, //3
			{1,0,0,1,1,0,0}, //4
			{0,1,0,0,1,0,0}, //5
			{0,1,0,0,0,0,0}, //6
			{0,0,0,1,1,1,1}, //7
			{0,0,0,0,0,0,0}, //8
			{0,0,0,0,1,0,0}, //9
	};
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, a[n][0]);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, a[n][1]);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, a[n][2]);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, a[n][3]);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, a[n][4]);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, a[n][5]);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, a[n][6]);
}

