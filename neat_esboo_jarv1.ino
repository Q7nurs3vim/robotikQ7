void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int isik = analogRead(A0);;  
  Serial.println(isik);
 if(isik < 200)
 {
   digitalWrite(2,1);
 }
  else 
  {
    digitalWrite(2,0);
  }
  delay(10);
}