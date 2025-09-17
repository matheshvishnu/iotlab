Program 3
// Prog-3: Develop a program to deploy an intrusion detection system using Ultrasonic and sound sensors. 
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
  Serial.print("Length :"); 
  Serial.print(uS); 
  Serial.println("cm");
  if(uS < 6)
  digitalWrite(14,HIGH);
  else
  digitalWrite(14,LOW); 
  
}
