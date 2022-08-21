int light;
int LED = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  light = analogRead(A2);
  delay(100);

  if (light > 1000)
  {
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
  Serial.println(light);
}

void loop() {
}

  
