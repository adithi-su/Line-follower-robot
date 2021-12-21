void setup() {
// motor positive - digital 10, negative - digital 11
pinMode(11, OUTPUT); 
pinMode(10, OUTPUT);
}

void loop() {
// to run clockwise - 10 (connected to positive terminal) - LOW, 11( to negative terminal) - HIGH
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(3000); //wait for 3 sec
// anticlockwise rotation - 
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(3000); //wait for 3 sec
} 
