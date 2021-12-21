void setup() {
Serial.begin(9600); //initialize serial comm with baud rate 9600,
pinMode(13, OUTPUT); // set pin 13 as Output pin
}

void loop() {
// value of A0 > 600 when object is detected, cz object reflects more as it moves closer
int sensor = analogRead(A0);
Serial.println("Sensor value = " + String(sensor));
if(sensor > 600) {
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13, LOW);  
}
} 
