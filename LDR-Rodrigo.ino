int ValorLDR = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ValorLDR = analogRead(A0);
  Serial.print(ValorLDR);
  Serial.print("\t");
  Serial.println(600);
  if(ValorLDR <400){
    digitalWrite(10, HIGH);
  }else{
    digitalWrite(10, LOW);
  }
  delay(10);
}
