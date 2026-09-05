void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  for(int i = 2; i < 9; i++){
  	digitalWrite(i, HIGH);
  }
}

void loop()
{
  for(int i = 2; i < 9; i++)
  {
    digitalWrite(i, LOW);
    delay(500);
  }
  
  for(int i = 8; i > 1; i--)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
  
  int lanLap = 1;
  while (lanLap <= 5)
  {
    for (int i = 2; i <= 8; i++)
    {
      if (i % 2 == 0) digitalWrite(i, LOW);
      else digitalWrite(i, HIGH);
    }
    delay(500);
    for (int i = 2; i <= 8; i++)
    {
      if (i % 2 == 0) digitalWrite(i, HIGH);
      else digitalWrite(i, LOW);
    }
    delay(500);
    
    lanLap++;
  }
  for(int i = 8; i > 1; i--)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
}