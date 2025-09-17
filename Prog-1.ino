//  Develop a program to blink 5 LEDs back and forth.
void LED_Clear();

int LED[]={18,19,23,25,26};
void setup() {
  for(int i=0;i<5;i++)
  {
  pinMode(LED[i],OUTPUT);
  }
}

void loop() {
 
   for(int i=0;i<5;i++)
  {
  LED_Clear();
  digitalWrite(LED[i],HIGH); 
  delay(1000);
  }
   for(int i=3;i>0;i--)
  {
  LED_Clear();
  digitalWrite(LED[i],HIGH); 
  delay(1000);
  }
}

 void LED_Clear()
 {
  for(int i=0;i<5;i++)
  {
  digitalWrite(LED[i],LOW); 
  }
  
 }
 
