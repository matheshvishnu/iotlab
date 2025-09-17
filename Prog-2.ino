void setup() {  // This function runs once when the board starts or is reset.
  		// put your setup code here, to run once:
  pinMode(35,INPUT); // Configure pin 35 as an input (pushbutton)

  pinMode(13,OUTPUT); // Configure pin 13 as an output (relay control)
}

void loop() {  // This function runs continuously after setup().
  // put your main code here, to run repeatedly:
   int val;
   val=digitalRead(35);   // Read the state of the pushbutton (HIGH or LOW)
// If the pushbutton is pressed, digitalRead(35) returns HIGH (1).
// If the pushbutton is not pressed, it returns LOW (0).
   if(val)
   digitalWrite(13,HIGH);  // Turn the relay ON (energize coil, close switch)
// When the pushbutton is pressed (val = HIGH), pin 13 is set to HIGH, which energizes the 
// relay and turns ON the connected load (e.g., LED, bulb, or motor).
   else
   digitalWrite(13,LOW);   // Turn the relay OFF (open switch)
// When the pushbutton is released (val = LOW), pin 13 is set to LOW, which de-energizes
//  the relay and turns OFF the load.
}
