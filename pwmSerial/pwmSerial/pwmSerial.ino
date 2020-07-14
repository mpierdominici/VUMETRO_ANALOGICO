void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
 if (Serial.available()) {
    
      String texto = Serial.readString();
      int temp=texto.toInt();
      float t=0.0007*temp*temp*temp-0.0539*temp*temp+3.7*temp+0.7768;
      t=(t/255.0)*1024;
      temp=t;
      Serial.println(temp);
      analogWrite(D2,temp);
}

}
