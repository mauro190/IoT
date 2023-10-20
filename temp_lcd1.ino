#include <LiquidCrystal.h>
float temp = 0;      
int sensorValue = 0; 

int led = 13;      
int mot = 10;      	 

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(led, OUTPUT);
  
  pinMode(mot, OUTPUT);
  
  lcd_1.begin(16, 2);

  lcd_1.print("Temperatura de: ");
  
  Serial.begin(9600);

}

void loop()
{  
  temp = (sensorValue * (500.0 / 1024.0)) - 50.0 ;
  sensorValue = analogRead(A0);
  Serial.println(temp);
  lcd_1.setCursor(0, 1);
  lcd_1.print(temp);
  delay(1000);  
  
  if(temp<=10){
  	digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
  	digitalWrite(mot, HIGH);
  }
  
  if(temp>=11 && temp <= 25){
  	digitalWrite(led, LOW);
    delay(500);
  	digitalWrite(mot, LOW);
  }
  
  if(temp>=26){
  	digitalWrite(led, HIGH);
    delay(500);
  	digitalWrite(mot, HIGH);
  }
  

}