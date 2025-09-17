// Develop a program to setup a UART protocol and pass a string through the protocol.
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Welcome to");
  Serial.println("CMR Institute of Technology!");
  delay(1000);
}
