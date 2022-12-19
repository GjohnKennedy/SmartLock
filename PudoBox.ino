#include <ezButton.h>

#define btn1 22
#define btn2 23
#define btn3 24
#define btn4 25
#define btn5 26

#define buz1 28
#define buz2 29
#define buz3 30
#define buz4 31
#define buz5 32



ezButton button1(btn1);
ezButton button2(btn2);
ezButton button3(btn3);
ezButton button4(btn4);
ezButton button5(btn5);

char res;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  pinMode(buz1,OUTPUT);
  pinMode(buz2,OUTPUT);
  pinMode(buz3,OUTPUT);
  pinMode(buz4,OUTPUT);
  pinMode(buz5,OUTPUT);
  
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  
  Serial.begin(9600);
  button1.setDebounceTime(50);
  button2.setDebounceTime(50);
  button3.setDebounceTime(50);
  button4.setDebounceTime(50);
  button5.setDebounceTime(50);
 

Serial.print("Enter value...");
}

void loop() {
  
  button1.loop();
  button2.loop();
  button3.loop();
  button4.loop();
  button5.loop();
  
  button1status();
  button2status();
  button3status();
  button4status();
  button5status();
  
  if(Serial.available()>0)
  {
    res = Serial.read();
   
    if(res == 'a')
      {
        Serial.println(res);
        digitalWrite(2,LOW);
        delay(800);
        digitalWrite(2,HIGH);
        delay(5000);
        button1status();
      }    
     if(res == 'b')
      {
       digitalWrite(3,LOW);
        delay(800);
        digitalWrite(3,HIGH);
        delay(5000);
        button2status();
      }
     if(res == 'c')
      {
       digitalWrite(4,LOW);
        delay(800);
        digitalWrite(4,HIGH);
        delay(5000);
        button3status();
      }
     if(res == 'd')
      {
       digitalWrite(5,LOW);
        delay(800);
        digitalWrite(5,HIGH);
        delay(5000);
        button4status();
      }
     if(res == 'e')
      {
       digitalWrite(6,LOW);
        delay(800);
        digitalWrite(6,HIGH);
        delay(5000);
        button5status();
      }
  res=' ';
  
  }
 
}

void button1status()
{
  int state = button1.getState();
  if(state == HIGH)
  {
    digitalWrite(buz1,HIGH);
    Serial.println("The limit switch: UNTOUCHED");
  }
  else
  {
    Serial.println("The limit switch: TOUCHED");
    digitalWrite(buz1,LOW);
  }
}


void button2status()
{
  int state = button2.getState();
  if(state == HIGH)
  {
    digitalWrite(buz2,HIGH);
    Serial.println("The limit switch: UNTOUCHED");
  }
  else
  {
    Serial.println("The limit switch: TOUCHED");
    digitalWrite(buz2,LOW);
  }
}

void button3status()
{
  int state = button3.getState();
  if(state == HIGH)
  {
    digitalWrite(buz3,HIGH);
    Serial.println("The limit switch: UNTOUCHED");
  }
  else
  {
    Serial.println("The limit switch: TOUCHED");
    digitalWrite(buz3,LOW);
  }
}

void button4status()
{
  int state = button4.getState();
  if(state == HIGH)
  {
    digitalWrite(buz4,HIGH);
    Serial.println("The limit switch: UNTOUCHED");
  }
  else
  {
    Serial.println("The limit switch: TOUCHED");
    digitalWrite(buz4,LOW);
  }
}

void button5status()
{
  int state = button5.getState();
  if(state == HIGH)
  {
    digitalWrite(buz5,HIGH);
    Serial.println("The limit switch: UNTOUCHED");
  }
  else
  {
    Serial.println("The limit switch: TOUCHED");
    digitalWrite(buz5,LOW);
  }
}
