void setup()
{
  pinMode(RED_LED, OUTPUT);
  digitalWrite(RED_LED, LOW);
  
  pinMode(GREEN_LED, OUTPUT);
  digitalWrite(GREEN_LED, LOW);
  
  pinMode(P2_6, OUTPUT);
  digitalWrite(P2_6, LOW);
  
  pinMode(P2_5, OUTPUT);
  digitalWrite(P2_5, LOW);
  pinMode(P2_5, INPUT);
  
  pinMode(P2_4, OUTPUT);
  digitalWrite(P2_4, LOW);
  pinMode(P2_4, INPUT);
}

void loop()
{
  digitalWrite(P2_6, HIGH);
  if (digitalRead(P2_5)) {
    digitalWrite(RED_LED, LOW); 
  }
  else {
    digitalWrite(RED_LED, HIGH);
  }
  digitalWrite(P2_6, LOW);
  delay(10);
}
