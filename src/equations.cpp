/*
 * file - equations.cpp
 * Equations for eyes_motor_zeros
 *
 */

#include "equations.h"

float fmodf(float a, float n) {
	return a - n*float(int(a/n));	
}

/** angle_to_int
 *  *
 *   * @param angle Floating point representation of angle in degrees (0 to 360)
 *    * @param resolution Number of steps in PWM range (default=4096).
 *     * @return Integer representation of return to zero relative to number of steps
 *      */
int angle_to_int(float angle, int resolution){
	  const float MAX_ANGLE_DEG = 360.0;
		  angle = fmodf(angle, MAX_ANGLE_DEG);
			  return int(angle/MAX_ANGLE_DEG*resolution);
}

