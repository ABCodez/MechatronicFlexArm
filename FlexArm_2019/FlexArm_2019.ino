//imports servo library
#include <Servo.h>
//States each servo being used/attached
Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
//States each flex sensor being used/attached
const int flexpin_1 = 0;
const int flexpin_2 = 1;
const int flexpin_3 = 2;
const int flexpin_4 = 3;
void setup()  
//Attaches each servo to different pin on arduino board
{
  Serial.begin(9600);  
  servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(3);
}
void loop()
{
  //servo1 loop 
  //notice how each flex sensor has it's own unique value
  int flexpos_1;  
  int servopos_1;  
  flexpos_1 = analogRead(flexpin_1); 
  servopos_1 = map(flexpos_1, 930, 1023, 180, 0); 
  servopos_1 = constrain(servopos_1, 0, 180);  
  servo1.write(servopos_1);  
    //prints the value of the sensor and angle of servo motor
  Serial.print("sensor: "); 
  Serial.print(flexpos_1); 
  Serial.print(" servo: "); 
  Serial.println(servopos_1);  
  delay(500); 
  //servo2
//notice how each flex sensor has it's own unique value
  int flexpos_2;  
  int servopos_2;  
  flexpos_2 = analogRead(flexpin_2); 
  servopos_2 = map(flexpos_2, 750, 1023, 180, 0); 
  servopos_2 = constrain(servopos_2, 0, 180);  
  servo2.write(servopos_2);  
    //prints the value of the sensor and angle of servo motor
  Serial.print("sensor: "); 
  Serial.print(flexpos_2); 
  Serial.print(" servo: "); 
  Serial.println(servopos_2);  
  delay(500);
    //servo3
  //notice how each flex sensor has it's own unique value
  int flexpos_3;  
  int servopos_3;  
  flexpos_3 = analogRead(flexpin_3); 
  servopos_3 = map(flexpos_3, 840, 1023, 180, 0); 
  servopos_3 = constrain(servopos_3, 0, 180);  
  servo3.write(servopos_3);  
  //prints the value of the sensor and angle of servo motor
  Serial.print("sensor: "); 
  Serial.print(flexpos_3); 
  Serial.print(" servo: "); 
  Serial.println(servopos_3);  
  delay(500);   
  //servo4
  //notice how each flex sensor has it's own unique value
  int flexpos_4;  
  int servopos_4;  
  flexpos_4 = analogRead(flexpin_4); 
  servopos_4 = map(flexpos_4, 910, 1023, 180, 0); 
  servopos_4 = constrain(servopos_4, 0, 180);  
  servo2.write(servopos_4);  
  
  //prints the value of the sensor and angle of servo motor 
  Serial.print("sensor: "); 
  Serial.print(flexpos_4); 
  Serial.print(" servo: "); 
  Serial.println(servopos_4);  
  delay(500);}

