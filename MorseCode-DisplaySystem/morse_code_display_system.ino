// C++ code
//
#include <LiquidCrystal.h>
String rec = "" ;
  int rs=2;
  int enable=3;
  int db4=4;
  int db5=5;
  int db6=6;
  int db7=7;
  int i=0;
LiquidCrystal lcd(rs,enable,db4,db5,db6,db7);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop()
{	    
  
  	
    Serial.println("Unesite vasu rec: "); 
    while (Serial.available()==0)
    {  
    }
      rec = Serial.readString();
  
  		delay(1000);
 		 lcd.setCursor(0,0);
  		lcd.clear();
  		lcd.setCursor(0,1);
  		lcd.clear();
      Serial.println(rec);
  	delay(1000);
  	lcd.setCursor(0,0);
  		
     	
  	  i=0;
  while(rec[i] != '\0') /* Znak "/" je stavljen radi razumevanja
    i predstavlja kraj reci */
  {
    switch(rec[i])
     {   case 'A':
      	case 'a':
      				lcd.print(".-/"); 
          break;  
      case 'B':
      case 'b':
     				 lcd.print("-.../");
          break;
      case 'C': 
      case 'c':
     				 lcd.print("-.-./"); 
          break;  
      case 'D':
      case 'd':
     				 lcd.print("-../"); 
          break;  
      case 'E':   
      case 'e':
      					lcd.print("./"); 
          break;  
      case 'F':
      case 'f':
      					lcd.print("..-./");
      break;
       case 'G':
      case 'g':
      					lcd.print("--./");
       break;   
    case 'H':
      case 'h':
      					lcd.print("..../");
       break; 
   case 'I':
      	case 'i':
      					lcd.print("../"); 
      break;  
   case 'J':
      case 'j':
      					lcd.print(".---/");
     break;
     case 'K':
      case 'k':
      					lcd.print("-.-/");  
     break;  
   case 'L': 
      case 'l':
      					lcd.print(".-../");     
   break;  
   case 'M':
      case 'm':
      					lcd.print("--/");
       break; 
    case 'N':
      case 'n':
      					lcd.print("-./");     
    break;   
  case 'O':
      case 'o':
      					lcd.print("---/");  
     break;   
  case 'P':
      case 'p':
      				lcd.print(".--./"); 
      break;  
  case 'R': 
      case 'r':
      				lcd.print(".-./");  
     break;   
  case 'S': 
      case 's':
      				lcd.print(".../");    
   break;
   case 'T': 
      case 't':
      			lcd.print("-/");
       break;  
   case 'U':  
      case 'u':
      			lcd.print("..-/");    
     break;   
  case 'V': 
      case 'v':
      			lcd.print("...-/");     
  break;
  case 'Z':
      case 'z':
      			lcd.print("--../");    
   break;  
  }

     if(i>=16)
  { lcd.setCursor(0,1);
    lcd.autoscroll();
  }
 
  i++;
  }

}