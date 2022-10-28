#include "pitches.h"
#define speaker 3
#define song1 A1 
#define song2 A2 
#define song3 A3
#define light1 9
#define light2 10
#define light3 11

int temp = 3;


void play(int note, int dur) {
  tone(speaker,note);
  delay(dur);
  noTone(speaker);
  delay(dur);
  // put your setup code here, to run once:

}


void setup(){
  pinMode(song1, INPUT);
  pinMode(song2, INPUT);
  pinMode(song2, INPUT);
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  Serial.begin(9600);
  }



void loop() {
  int isSong1 = digitalRead(song1);
  int isSong2 = digitalRead(song2);
  int isSong3 = digitalRead(song3);


  Serial.println(isSong1);
  delay(20);

  if (isSong1 == 1)
  {
       digitalWrite(light1, HIGH);

      play(NOTE_D7, 1000);
      play(NOTE_D2, 1000);
      play(NOTE_B3, 1000);
       play(NOTE_D7, 1000);
      play(NOTE_D2, 1000);
      play(NOTE_B3, 1000);
       play(NOTE_D7, 1000);
      play(NOTE_D2, 1000);
      play(NOTE_B3, 1000);
       play(NOTE_D7, 1000);
      play(NOTE_D2, 1000);
      play(NOTE_B3, 1000);
      
       digitalWrite(light1, LOW);

  }

  if (isSong2 == 1)
  {
         digitalWrite(light2, HIGH);
     play(NOTE_C8, 1000);
      play(NOTE_D3, 1000);
      play(NOTE_D8, 1000);
           play(NOTE_C8, 1000);
      play(NOTE_D3, 1000);
      play(NOTE_D8, 1000);     
      play(NOTE_C8, 1000);
      play(NOTE_D3, 1000);
      play(NOTE_D8, 1000);    
      play(NOTE_C8, 1000);
      play(NOTE_D3, 1000);
      play(NOTE_D8, 1000);     
      play(NOTE_C8, 1000);
      play(NOTE_D3, 1000);
      play(NOTE_D8, 1000);
     digitalWrite(light2, LOW);

  }
   if (isSong3 == 1)
  {
             digitalWrite(light3, HIGH);
     play(NOTE_A2, 10);
          play(NOTE_C3, 1000);
      play(NOTE_D1, 1000);
      play(NOTE_D4, 1000);
       play(NOTE_A2, 10);
          play(NOTE_C3, 1000);
      play(NOTE_D1, 1000);
      play(NOTE_D4, 1000);
       play(NOTE_A2, 10);
          play(NOTE_C3, 1000);
      play(NOTE_D1, 1000);
      play(NOTE_D4, 1000);
     digitalWrite(light3, LOW);

  }
}
