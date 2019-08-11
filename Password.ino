#include<DateTime.h>
#include<DateTimeStrings.h>
String pwd = "password";
String input="";

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   
   
  

}

void loop() {
  // put your main code here, to run repeatedly:
  while(pwd!=input){Serial.println("Enter the password");
  input=Serial.readString();
  }
  if(pwd==input){
      Serial.println("Correct password");
      Serial.println(DateTime.now());
  }

}
