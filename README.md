# eyes_motor_zero

Arduino code to drive an unipolar stepper motor that I pulled out of an old scanner.

## Find the connected Arduinos:
```console
jerahmie@penguin:~$ arduino-cli board list

jerahmie@penguin:~$ arduino-cli board list
Port         Protocol Type              Board Name            FQBN            Core
/dev/ttyACM0 serial   Serial Port (USB) Arduino Uno R4 Minima arduino:renesas_uno:minima arduino:renesas_uno
```
## Install the Arduino AVR core
```console
jerahmie@penguin:~$ arduino-cli core install arduino:renesas_uno
```

## Build and neopixel_test
```console 
jerahmie@penguin:~$ arduino-cli compile -b arduino:renesas_uno:minima eyes_motor_zero.ino
```


## Upload the Sketch
```console
jerahmie@penguin~:$ arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:renesas_uno:minima eyes_motor_zero.ino
```

