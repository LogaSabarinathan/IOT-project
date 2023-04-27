void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int r=analogRead(A0);
  // Serial.println(r);
  int r1=digitalRead(12);
  // Serial.println(r1);
  int g=map(r,0,1023,0,255);
  // Serial.println(g);
  if(g>120){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    Serial.println("Street Light Off");
  }else{
    // Serial.println(r1);
    if(r1==HIGH){
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      Serial.println("Street Light On");
    }else{
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      Serial.println("Street Light Off");
    }
  }
  delay(500);
}
