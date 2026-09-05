int ledXanh = 2;
int ledDo = 3;

void setup() {
  pinMode(ledXanh, OUTPUT);
  pinMode(ledDo, OUTPUT);
}

void loop() {
  digitalWrite(ledXanh, HIGH);
  digitalWrite(ledDo, LOW);
  delay(500); 

  digitalWrite(ledXanh, LOW);
  digitalWrite(ledDo, HIGH);
  delay(500); 
}