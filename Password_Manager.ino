#include <LiquidCrystal.h>
#include<Keypad.h>

#define pass_length=5;
char user[pass_length];
char master[pass_length] = "abcd1";
byte count=0

const byte rows=4;
const byte cols=3; 
char newKeys[rows][cols]={
  {'1','2','3'),
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}};
  
byte rowpins[rows] = {9,8,7,6};
byte colpins[cols] = {5,4,3};

Keypad customKeypad = Keypad(makeKeymap(newKeys),rowpins,colpins, rows, cols);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(cols,rows); 
}

void loop() {
  // put your main code here, to run repeatedly:
  char custkey = customKeypad.getKey();
  if(custkey){
    user[count] = custkey;
    lcd.setCursor(count,1);
    lcd.print(user[count]);
    count++;
  }
    if(count == pass_length-1){
    lcd.clear();
   
     if(!strcmp(user, master)){
      lcd.print("Password Correct");
     else{
     lcd.print("Incorrect");
   }
    
}

}




  

    
      digitalWrite(signalPin, HIGH); 
      delay(5000);
      digitalWrite(signalPin, LOW);
      }
    else{
      lcd.print("Incorrect");
      delay(1000);
      }
    
    lcd.clear();
    clearData();  
  }
}

void clearData(){
  while(count !=0){
    user[count--] = 0; 
  }
  return;
}

