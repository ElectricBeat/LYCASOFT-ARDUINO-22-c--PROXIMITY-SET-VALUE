#include <LiquidCrystal.h> 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int i,j;

int SW_1=8;
int SW_2=9;

int val_1=0;
int val_2=0;

int once_1=0;
int once_2=0;

void setup() 
{
  lcd.begin(16, 2);

  lcd.setCursor(0,0);
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  delay(1000);
   
  lcd.setCursor(0,1);
  lcd.print("PRXSV:");
  
  lcd.setCursor(9,1);
  lcd.print("PRX V:");
  
  pinMode(SW_1,INPUT);
  pinMode(SW_2,INPUT);
  
}
void loop() 
{
  val_1=digitalRead(SW_1);
  delay(120);
  if(val_1 != LOW)
  {
    if(once_1 == 0);
    {
      lcd.setCursor(6,1); 
      lcd.print(i);
      i++;
      if(i>9)
      {
        i=0;
      }
      delay(500);
      once_1=1;
    }  
  }
  else
  {
    once_1=0;
  }  
  
  val_2=digitalRead(SW_2);
  delay(120);
  
  if(val_2 != LOW)
  {
    
    for(j=0;j<i;j++)
    {
      lcd.setCursor(15,1); 
      lcd.print(j);
      delay(1000);
    }
  }  
}
