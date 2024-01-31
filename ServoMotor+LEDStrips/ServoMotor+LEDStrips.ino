#include <Servo.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> 
#endif
#define PIN 4
#define NUMPIXELS 18



int i = 0;
int taster1=0; // levo
int taster2=0; // desno
int j = 0;
int start=0;
int k=0;
int br=0;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Servo servo;

void setup()
{
  servo.attach(3);
  pixels.begin();
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  
  
  servo.write(0);
  
}

void loop()
{
  delay(1000);
  taster1=digitalRead(5);
  taster2=digitalRead(6);
  if(taster1==1)
  {
    i++;
    servo.write(start-(i*10)+(j*10));
    pixels.clear();
    delay(500);
    for(int z=0;z<br-i+j;z++)
    {
    pixels.setPixelColor(z,pixels.Color(255,0,0));
    pixels.show();
    }
    k=br-i+j;
    delay(1000);
  }
  if(taster2==1)
  {
    j++;
    servo.write(start-(i*10)+(j*10));
    pixels.clear();
    delay(500);
    for(int z=0;z<br-i+j;z++)
    {
    pixels.setPixelColor(z,pixels.Color(255,0,0));
    pixels.show();
    }
    k=br-i+j;
  	delay(1000);
  }
  Serial.println(taster1);
  
  /* pixels.clear();
  for(int i=0; i<NUMPIXELS; i++) 
  {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    
  }
  for (i = 90; i <= 180; i += 1) {
    servo.write(i);
    delay(50); 
  } 
  for (k = -90; k >=0; k += 1) {
    servo.write(k);
    delay(50); // Wait for 50 millisecond(s)
  }*/
}