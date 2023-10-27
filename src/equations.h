/*
 * File - equations.h
 * A collection of functions used by eyes_motor_zero.ino
 *
 */

#ifndef _EQUATIONS_H_
#define _EQUATIONS_H_

static const int SERIAL_BAUD = 9600;
static const int PCA9685_I2C_ADDR = 0x40;
static const int PCA9685_FREQUENCY_OSCILLATOR = 25'000'000;
static const int PCA9685_RESOLUTION_STEPS = 4096;

float fmodf(float, float);
int angle_to_int(float, int);

#endif // _EQUATIONS_H_

