/*
 * file - eyes_motor_zero.ino
 * Set motor zeros for neutral position for animatronic eyes
 *
 */
#include <Wire.h>
#include "src/equations.h"

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
int set_pwm(uint8_t dev, float angle) {
  int pwm_ind = angle_to_int(angle, PCA9685_RESOLUTION_STEPS);
  uint8_t led_on_low = 0;
  uint8_t led_on_high = 0;
  uint8_t led_off_low = pwm_ind & 0xFF;
  uint8_t led_off_high = pwm_ind >> 8;
  Serial1.println(led_off_low);
  Serial1.println(led_off_high);
  Wire.beginTransmission(dev);
  Wire.write(LED0_ON_L); // 
  Wire.write(led_on_low); // MODE1 control register data
  Wire.endTransmission();

  Wire.beginTransmission(dev);
  Wire.write(LED0_ON_H);
  Wire.write(led_on_high);
  Wire.endTransmission();

  Wire.beginTransmission(dev);
  Wire.write(LED0_OFF_L);
  Wire.write(led_off_low);
  Wire.endTransmission();

  Wire.beginTransmission(dev);
  Wire.write(LED0_OFF_H);
  Wire.write(led_off_high);
  Wire.endTransmission();

  return 0;
}

// setup()
void setup() {
  Wire.begin();
  Serial1.begin(9600);
  //Serial1.println();
  Serial1.println("Hello!");
}

// main() loop
void loop() {
  int res = 0;
  //Serial1.println("Set Animatronic eyes to default position.");	
  //Serial1.println("Attach servo linkages now.");
  static byte x = 0;
  //int angle_index = angle_to_int(90.0, 4096);
  Serial1.println(x);
  //Wire.begin();
  //Wire.beginTransmission(0x40);
  //Wire.write(0x55);
  //Wire.endTransmission();
  x++;
  res = set_pwm(PCA9685_I2C_ADDR, 0.0);
  delay(5000);
  res = set_pwm(PCA9685_I2C_ADDR, 90.0);
  delay(5000);
 
}
