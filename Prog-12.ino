Develop a program to simulate interfacing with the keypad module to record the keystrokes.
// Develop a program to simulate interfacing with the keypad module to record the keystrokes.
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(35,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val=digitalRead(35);
  Serial.println(val);
  if(val==1)
  Serial.println("Key Pressed")
  else
  Serial.println("Key Released")
  delay(500);
}


