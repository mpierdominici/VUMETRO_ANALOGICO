void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
 if (Serial.available()) {
    
      String texto = Serial.readString();
      int temp=texto.toInt();
      Serial.println(temp);
      analogWrite(9,temp);
}

}
