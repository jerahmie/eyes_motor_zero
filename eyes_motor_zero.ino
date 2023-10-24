/*
 * file - eyes_motor_zero.ino
 * Set motor zeros for neutral position for animatronic eyes
 *
 */
static const int SERIAL_BAUD = 9600;

// setup()
void setup() {
 Serial.begin(SERIAL_BAUD); 
}

// main() loop
void loop() {
  Serial.println("Hello");
}
