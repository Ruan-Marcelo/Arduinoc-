#include <Arduino.h>

const int pinBotao = 19;
int estadoBotao;
const int pinLedVM = 18;
const int pinLedAM = 5;
const int pinLedVD = 16;

void setup() {
Serial.begin(921600);

 pinMode(pinBotao, INPUT);
 pinMode(pinLedVM, OUTPUT);
 pinMode(pinLedAM, OUTPUT);
 pinMode(pinLedVD, OUTPUT);

}

void loop() {
 
 estadoBotao = digitalRead(pinBotao);

 Serial.println(estadoBotao);

 if(estadoBotao == HIGH){
   
  for(int i=0; i<3; i++){
 
     digitalWrite(pinLedVM, HIGH);
     delay(500);
     digitalWrite(pinLedVM, LOW);
     delay(500);
     }
   
 

     for(int i=0; i<3; i++){
     digitalWrite(pinLedAM, HIGH);
     delay(500);
     digitalWrite(pinLedAM, LOW);
     delay(500);

 
    }

     for(int i=0; i<3; i++){
     digitalWrite(pinLedVD, HIGH);
     delay(500);
     digitalWrite(pinLedVD, LOW);
     delay(500);
   
   
     if(i == 2){
     digitalWrite(pinLedVM, HIGH);
     digitalWrite(pinLedAM, HIGH);
     digitalWrite(pinLedVD, HIGH);
     delay(5000);
     digitalWrite(pinLedVM, LOW);
     digitalWrite(pinLedAM, LOW);
     digitalWrite(pinLedVD, LOW);
    }
   }
 }
  else{
    digitalWrite(pinLedVM, LOW);
    digitalWrite(pinLedAM, LOW);
    digitalWrite(pinLedVD, LOW);
 }
}