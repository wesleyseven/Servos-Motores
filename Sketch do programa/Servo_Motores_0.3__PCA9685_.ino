#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>
#include <PS2X_lib.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

PS2X CPS;

int error = 0; 
byte type = 0;
byte vibrate = 0;

void writeServos(int posicao, int tempo);
void beginServos();

  int angle=0;
  int angle1=0;
  int angle2=0;
  int angle3=0;
  int angle4=0;
  int angle5=0;
  int angleStep=1;

void setup(){

  beginServos();
  delay(300);

error = CPS.config_gamepad(24,23,25,22, true, true);

}

void loop() {

      if(error == 1)
      return; 

      CPS.read_gamepad(false, vibrate); 

      Servo0();
      Servo1();
      Servo2();
      Servo3();
      Servo4();
      Servo5();

      delay(5);
}
