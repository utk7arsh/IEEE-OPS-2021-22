#define vrx A0
#define vry A1
#define sw 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vrx, INPUT);
  pinMode(vry, INPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x_label = analogRead(vrx);
  int y_label = analogRead(vry);
  int swit = digitalRead(sw);
  Serial.print("X: ");
  Serial.print(x_label);
  Serial.print("\t"); //this prints a tab
  Serial.print("Y: ");
  Serial.print(y_label);
  Serial.print("\t"); //this prints a tab
  Serial.print("SW: ");
  Serial.println(swit);
  delay(1000);
  if (y_label > 900){
    Serial.print("UP"); 
    Serial.print("\t");   
  }
  if (y_label < 200){
    Serial.print("DOWN");
    Serial.print("\n");
  }
  if (x_label > 900){
    Serial.print("RIGHT");
    Serial.print("\n");
  }
  if(x_label < 200){
    Serial.print("LEFT");
    Serial.print("\n");
  }
  delay(500);
  
}
