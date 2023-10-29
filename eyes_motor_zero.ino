/*
 * file - eyes_motor_zero.ino
 * Set motor zeros for neutral position for animatronic eyes
 *
 */
#include <Wire.h>
#include "src/equations.h"
#include "PCA9685.h"

#define SERIAL_BAUD 9600

#define LED0_ON_L 0x06
#define LED0_ON_H 0x07
#define LED0_OFF_L 0x08
#define LED0_OFF_H 0x09

/* set_pwm
 * @param devdi2c device id
 * @param angle 
 * @return 0 if successful 
 */
//int set_pwm(uint8_t dev, float angle) {
//  int pwm_ind = angle_to_int(angle, PCA9685_RESOLUTION_STEPS);
//  uint8_t led_on_low = 0;
//  uint8_t led_on_high = 0;
//  uint8_t led_off_low = pwm_ind & 0xFF;
//  uint8_t led_off_high = pwm_ind >> 8;
//  Serial1.println(led_off_low);
//  Serial1.println(led_off_high);
//  Wire.beginTransmission(dev);
//  Wire.write(LED0_ON_L); // 
//  Wire.write(led_on_low); // MODE1 control register data
//  Wire.endTransmission();
//
//  Wire.beginTransmission(dev);
//  Wire.write(LED0_ON_H);
//  Wire.write(led_on_high);
//  Wire.endTransmission();
//
//  Wire.beginTransmission(dev);
//  Wire.write(LED0_OFF_L);
//  Wire.write(led_off_low);
//  Wire.endTransmission();
//
//  Wire.beginTransmission(dev);
//  Wire.write(LED0_OFF_H);
//  Wire.write(led_off_high);
//  Wire.endTransmission();
//
//  return 0;
//}

PCA9685 pwmController(Wire);
PCA9685_ServoEval pwmServo1;

// setup()
void setup() {
  Serial1.begin(9600);
  Serial1.println("Hello!");
  Wire.begin();
  pwmController.resetDevices();
	pwmController.init();
	pwmController.setPWMFreqServo();
	//
	pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(-90));
	Serial1.println(pwmController.getChannelPWM(0));
	//
	

}

// main() loop
void loop() {
	pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(0)); 
  delay(5000);
  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(90));	
  delay(5000);
  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(0));	
  delay(5000);
  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(-90));	
  delay(5000);
}
