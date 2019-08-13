int motor1 = 5;
int motor2 = 6;
int motor3 = 9;
int motor4 = 10;

int pot0 = A0;
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;

int potVal= 0;

int motorVal1 = 0;
int motorVal2 = 0;
int motorVal3 = 0;
int motorVal4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 potVal = analogRead(pot0);
 motorVal1 = map(potVal, 0, 1023, 0, 255);
 analogWrite(motor1, motorVal1);
 
 potVal = analogRead(pot1);
 motorVal2 = map(potVal, 0, 1023, 0, 255);
 analogWrite(motor2, motorVal2);
 
 potVal = analogRead(pot2);
 motorVal3 = map(potVal, 0, 1023, 0, 255);
 analogWrite(motor3, motorVal3);
 
 potVal = analogRead(pot3);
 motorVal4 = map(potVal, 0, 1023, 0, 255);
 analogWrite(motor4, motorVal4);
}
