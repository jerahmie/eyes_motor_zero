/*
 * File - equations.h
 * A collection of functions used by eyes_motor_zero.ino
 *
 */

#ifndef _EQUATIONS_H_
#define _EQUATIONS_H_

#define PCA9685_RESOLUTION_STEPS 4096
#define PCA9685_I2C_ADDR 0x40
#define PCA9685_FREQUENCY_OSCILLATOR 25'000'000

float fmodf(float, float);
int angle_to_int(float, int);

#endif // _EQUATIONS_H_

