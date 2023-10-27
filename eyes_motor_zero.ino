/*
 * file - eyes_motor_zero.ino
 * Set motor zeros for neutral position for animatronic eyes
 *
 */
#include <Wire.h>
#include "src/equations.h"

/* set_pwm
 * @param dev i2c device id
 * @param angle 
 * @return 0 if successful 
 */
int set_pwm(uint8_t dev, float angle) {
	return 0;
}

// setup()
void setup() {
	Wire.begin(); 
	Serial.begin(SERIAL_BAUD);
}

// main() loop
void loop() {
  Serial.println("Set Animatronic eyes to default position.");	
  Serial.println("Done!");
  Serial.println("Attach servo linkages now.");

}
