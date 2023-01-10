/*
 * 7seg.h
 *
 *  Created on: Dec 25, 2022
 *      Author: MINHTHU
 */

#ifndef INC_7SEG_H_
#define INC_7SEG_H_
#include "main.h"
#include "global.h"
void display7SEG(int);
void display7SEG_1(int);
void increment(int, int);
void decrement(int, int);
void reset_counter(int);
int get_counter(int);
extern int seg_counter;
#endif /* INC_7SEG_H_ */
