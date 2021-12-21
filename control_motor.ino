void setup() {
pinMode(11, OUTPUT); 
pinMode(10, OUTPUT);
}

void loop() {
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(3000); //wait for 3 sec
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(3000); //wait for 3 sec
} 
