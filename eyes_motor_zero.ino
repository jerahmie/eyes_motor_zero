/*
 * file - eyes_motor_zero.ino
 * Set motor zeros for neutral position for animatronic eyes
 *
 */
#include <Wire.h>
#include <cmath.h>

static const int SERIAL_BAUD = 9600;
static const int PCA9685_I2C_ADDR = 0x40;
static const int PCA9685_FREQUENCY_OSCILLATOR = 25'000'000;
static const int PCA9685_RESOLUTION_STEPS = 4096;

/** angle_to_int
 *
 * @param angle Floating point representation of angle in degrees (0 to 360)
 * @param resolution Number of steps in PWM range (default=4096).
 * @return Integer representation of return to zero relative to number of steps
 */ 
int angle_to_int(float angle, int resolution){
	const float MAX_ANGLE_DEG = 360.0;	
	angle = fmodf(angle, MAX_ANGLE_DEG);
	return int(angle/MAX_ANGLE_DEG*resolution);
}

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
