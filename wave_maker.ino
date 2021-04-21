//Wave Maker Version 1

#include <Event.h>

int In1 = 7;
int In2 = 8;
int ENA = 5;
int button = 6;
int buttonread;
String execute;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(ENA, OUTPUT);
  //pinMode(button,INPUT);
}


void turnoffmotor() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
      
  if(Serial.available()){
      
      execute = Serial.readStringUntil('\n');

      // For PWM minimum and maximum values are from 0 to 255
      // Choose speed for the motor
      //1 = 130 rpm
      //2 = 150 rpm
      //3 = 180 rpm
      //4 = 210 rpm
      //5 = 240 rpm
      //6 = 255 rpm
      
      if(execute.equals(String("1"))) {
          Serial.print("Motor Speed: ");
          Serial.println(130);
          digitalWrite(In1, HIGH);
          digitalWrite(In2, LOW);
          analogWrite(ENA, 130);
          
          for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
       else if(execute.equals(String("2"))) {
            Serial.print("Motor Speed: ");
            Serial.println(150);
            digitalWrite(In1, HIGH);
            digitalWrite(In2, LOW);
            analogWrite(ENA, 150);
          
            for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
      else if(execute.equals(String("3"))) {
            Serial.print("Motor Speed: ");
            Serial.println(180);
            digitalWrite(In1, HIGH);
            digitalWrite(In2, LOW);
            analogWrite(ENA, 180);
          
            for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
      else if(execute.equals(String("4"))) {
            Serial.print("Motor Speed: ");
            Serial.println(210);
            digitalWrite(In1, HIGH);
            digitalWrite(In2, LOW);
            analogWrite(ENA, 210);
          
            for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
      else if(execute.equals(String("5"))) {
            Serial.print("Motor Speed: ");
            Serial.println(240);
            digitalWrite(In1, HIGH);
            digitalWrite(In2, LOW);
            analogWrite(ENA, 240);
          
            for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
      else if(execute.equals(String("6"))) {
            Serial.print("Motor Speed: ");
            Serial.println(255);
            digitalWrite(In1, HIGH);
            digitalWrite(In2, LOW);
            analogWrite(ENA, 255);
          
            for (int i = 0; i <= 30; i= i+1) {
                timer = 30 - i; // Counts down the digit by 30
                Serial.print("Timer: ");
                Serial.println(timer);
                delay(1000);
          }
          turnoffmotor();
      }
      else {
        Serial.print("Invalid Command");
        Serial.print('\n');
      }
  }
}
