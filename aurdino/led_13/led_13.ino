int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);//Nr.pin 3 mode(output/input)
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(200); //1000=1seg
digitalWrite(led,LOW);
delay(200);
}
