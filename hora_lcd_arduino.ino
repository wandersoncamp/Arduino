#include <LiquidCrystal.h>
int seg;
int segadd;
int minadd;
int min;
int horadd;
int hor;
LiquidCrystal lcd(2,4,5,10,11,12,13);
void setup() {
  horadd = 0;   
   hor = 0;    
  minadd = 0;   
   min = 0;        
  segadd = 0;  
   seg = 0;    
  lcd.begin(16, 2);
}
void loop() {
  lcd.print("    ");
  lcd.print(horadd);
  lcd.print(hor);
  lcd.write(':');
  lcd.print(minadd);
  lcd.print(min);
  lcd.write(':');
  lcd.print(segadd);
  lcd.print(seg);
  delay(1000);
  seg++;
  if (seg >= 10) {
    segadd++;
    seg = 0;
  }
  if (segadd >= 6) {
     segadd = 0;
     seg = 0;
     min++;
  }
  if (min >= 10) {
    minadd++;
    min = 0;
  }
  if (minadd >= 6) {
   minadd = 0;
    min = 0;
    hor++;
  }
  if (hor >= 10) {
    horadd++;
    hor = 0;
  }
  if (horadd >= 2 && hor >= 4) {
    horadd = 0;
    hor = 0;
    minadd= 0;
    min = 0;
    segadd = 0;
    seg = 0;
  }
  lcd.clear();
}


