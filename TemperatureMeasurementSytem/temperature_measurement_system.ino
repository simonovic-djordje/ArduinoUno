// C++ code
//
#include <LiquidCrystal.h>
  int rs=2;
  int enable=3;
  int db4=4;
  int db5=5;
  int db6=6;
  int db7=7;


  float c1;
  float c2; // temp u celzijusima
  float c3;
  float f1;
  float f2; // temp u farenhajtima
  float f3;
  int temp1=A1; // 
  int temp2=A2; // napon na senzorima
  int temp3=A3; //

	
	int taster;
	float vout1;
	float vout2;
	float vout3;
LiquidCrystal lcd(rs,enable,db4,db5,db6,db7);
void setup()
{
  lcd.begin(16,2);
  pinMode(temp1,INPUT);
  pinMode(temp2,INPUT);
  pinMode(temp3,INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8,INPUT_PULLUP);
}

void loop()
{ 
  
  taster=digitalRead(8);
  
  vout1=analogRead(temp1);
  c1=(((vout1/1024)*5)-0.5)*100; // pretvaranje ucitanog napona
  f1=c1*1.8 +32;				// u celzijuse potom u faranhajte
  
  vout2=analogRead(temp2);
  c2=(((vout2/1024)*5)-0.5)*100;
  f2=c2*1.8 +32;
  
  vout3=analogRead(temp3);
  c3=(((vout3/1024)*5)-0.5)*100;
  f3=c3*1.8+32;
  
  if(taster==0)
  {
    lcd.clear();
    lcd.print(c1,1); // jedna decimala
    delay(500);
    lcd.print("      "); // sintaksicki izgled
    delay(500);
    lcd.print(c2,1);
    delay(500);
    lcd.print(" ");
    lcd.setCursor(0,1);
    delay(500);
    lcd.print(c3,1);
    lcd.setCursor(0,0);
  }
  if(taster==1)
  {
     lcd.clear();
    lcd.print(f1,1); // jedna decimala
    delay(500);
    lcd.print("    ");
    delay(500);
    lcd.print(f2,1);
    delay(500);
    lcd.print(" ");
    lcd.setCursor(0,1);
    delay(500);
    lcd.print(f3,1);
    lcd.setCursor(0,0);
  }
  
  delay(1000);
}