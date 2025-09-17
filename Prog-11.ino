Program 11
// Prog-11: Develop a water level depth detection system using Ultrasonic sensor.
// vcc - 5V
#include <NewPing.h>
#define TRIGGER_PIN 18 //GPIO18
#define ECHO_PIN 19    //GPIO19
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() { 
  Serial.begin(9600);
  pinMode(14,OUTPUT);
  
}
void loop() {
  delay(1000);
  unsigned int uS = sonar.ping_cm();
  Serial.print("Water Level :"); 
  Serial.print(uS); 
  Serial.println("cm");
   
}
