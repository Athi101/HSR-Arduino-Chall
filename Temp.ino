#include<Esplora.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(11.OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int celsius = Esplora.readTemperature(DEGREES_C);
  if (celsius>35){
    digitalWrite(11,HIGH);
  }
  else{
     digitalWrite(11,LOW);
  }

}
