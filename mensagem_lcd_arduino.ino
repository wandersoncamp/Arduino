#include <LiquidCrystal.h>


LiquidCrystal lcd(2,4,5,10,11,12,13);

void setup(){
lcd.begin(16,2);  
lcd.print("SISTEMAS DIEGAIS"); 


} 

void loop() {

lcd.noDisplay(); 
delay(700); 
lcd.display(); 
delay(700);

//lcd.scrollDisplayLeft(); passar a mensagem da esquerda para direita
//delay(500);
  
}
