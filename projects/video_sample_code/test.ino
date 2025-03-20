void setup() {
    // put your setup code here, to run once:
    pinMode(D4, OUTPUT);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(D4, HIGH); // Turn On LED
    delay(1000); // delay 1 second 
    digitalWrite(D4, LOW); // Turn Off LED 
    delay(1000);
  
  }