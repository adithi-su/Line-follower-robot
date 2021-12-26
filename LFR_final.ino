void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}
void moveRobot(String motion){
  if(motion == "Forward") {
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      Serial.println("Forward");
    }
  if(motion == "Backward"){
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      Serial.println("Backward");
    }
  if(motion == "Right")   {
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      Serial.println("Right");
    }
  if(motion == "Left"){
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      Serial.println("Left");
    }
  if(motion == "Stop"){
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      Serial.println("Stop");
    }
}

void loop() {
int R_sensor = analogRead(A0); //right sensor 
int L_sensor = analogRead(A1); //left sensor
//Serial.println("Value of right sensor:" + String(R_sensor) + "\tValue of left sensor:" + String(L_sensor)+ "\n");
//delay(1000);
if( R_sensor>600 && L_sensor>600) {
  //Robot centre on line
  moveRobot("Forward");
}
if( R_sensor<600 && L_sensor>600) {
  //line takes right curve
  moveRobot("Right");
}
if( R_sensor>600 && L_sensor<600) {
  //line takes left curve
  moveRobot("Left");
}
if( R_sensor<600 && L_sensor<600) {
  //line detected by both sensors - stop
  moveRobot("Stop");
}

}
