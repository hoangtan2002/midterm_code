/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: tan
 */

#ifndef SOFTWARE_TIMER_H_
#define SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;
extern int timer1_counter;
extern int timer1_flag;
extern int timer2_counter;
extern int timer2_flag;
extern int timer3_counter;
extern int timer3_flag;
extern int timer4_counter;
extern int timer4_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void initTimer();
void timer_run();

#endif /* SOFTWARE_TIMER_H_ */
