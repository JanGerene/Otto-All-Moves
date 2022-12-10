//----------------------------------------------------------------
//-- Otto All moves test
//-- Otto DIY invests time and resources providing open source code and hardware,
//-- please support by purchasing kits from https://www.ottodiy.com/
//-- Make sure to have installed all libraries: https://github.com/OttoDIY/OttoDIYLib
//-----------------------------------------------------------------
#include <Arduino.h>
#include "Otto.h"

#define LEFTLEG 2
#define RIGHTLEG 3
#define LEFTFOOT 4
#define RIGHTFOOT 5
#define BUZZER 13
#define DIN A3        // Data In pin
#define CS A2         // Chip Select pin
#define CLK A1        // Clock pin
#define MATRIX_ORIENTATION 1 // 8x8 LED Matrix orientation  Top  = 1, Bottom = 2, Left = 3, Right = 4

Otto otto; // This is Otto!

///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
void setup()
{
  otto.init(LEFTLEG, RIGHTLEG, LEFTFOOT, RIGHTFOOT, true, BUZZER); // Set the servo pins and BUZZER pin
  otto.initMATRIX(DIN, CS, CLK, MATRIX_ORIENTATION);
  otto.sing(S_connection); // Otto wake up!
  otto.home();
  delay(50);
  otto.playGesture(OttoHappy);
}

///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
///////////////////////////////////////////////////////////////////
void loop()
{
  otto.walk(2, 1000, FORWARD);  // 2 steps, "TIME". IF HIGHER THE VALUE THEN SLOWER (from 600 to 1400), 1 FORWARD
  otto.walk(2, 1000, BACKWARD); // 2 steps, T, -1 BACKWARD
  otto.turn(2, 1000, LEFT);  // 3 steps turning LEFT
  otto._tone(10, 3, 1);
  otto.bendTones(100, 200, 1.04, 10, 10);
  otto.home();
  delay(100);
  otto.turn(2, 1000, RIGHT); // 3 steps turning RIGHT
  otto.bend(1, 2000, RIGHT);
  otto.shakeLeg(1, 1500, LEFT);
  otto.home();
  delay(100);
  otto.shakeLeg(1, 2000, RIGHT);
  otto.moonwalker(3, 1000, 25, LEFT); 
  otto.moonwalker(3, 1000, 25, RIGHT);
  otto.crusaito(2, 1000, 20, LEFT);
  otto.crusaito(2, 1000, 20, RIGHT);
  delay(100);
  otto.flapping(2, 1000, 20, LEFT);
  otto.flapping(2, 1000, 20, RIGHT);
  delay(100);
  otto.swing(2, 1000, 20);
  otto.tiptoeSwing(2, 1000, 20);
  otto.jitter(2, 1000, 20); //(small T)
  otto.updown(2, 1500, 20); // 20 = H "HEIGHT of movement"T
  otto.ascendingTurn(2, 1000, 50);
  otto.jump(1, 500); // It doesn't really jumpl ;P
  otto.home();
  delay(100);
  otto.sing(S_cuddly);
  otto.sing(S_OhOoh);
  otto.sing(S_OhOoh2);
  otto.sing(S_surprise);
  otto.sing(S_buttonPushed);
  otto.sing(S_mode1);
  otto.sing(S_mode2);
  otto.sing(S_mode3);
  otto.sing(S_sleeping);
  otto.sing(S_fart1);
  otto.sing(S_fart2);
  otto.sing(S_fart3);
  otto.sing(S_happy);
  otto.sing(S_happy_short);
  otto.sing(S_superHappy);
  otto.sing(S_sad);
  otto.sing(S_confused);
  otto.sing(S_disconnection);
  delay(100);
  otto.playGesture(OttoHappy);
  otto.playGesture(OttoSuperHappy);
  otto.playGesture(OttoSad);
  otto.playGesture(OttoVictory);
  otto.playGesture(OttoAngry);
  otto.playGesture(OttoSleeping);
  otto.playGesture(OttoFretful);
  otto.playGesture(OttoLove);
  otto.playGesture(OttoConfused);
  otto.playGesture(OttoFart);
  otto.playGesture(OttoWave);
  otto.playGesture(OttoMagic);
  //otto.playGesture(OttoFail);
  otto.home();
  delay(100);
  otto.putMouth(zero);
  delay(100);
  otto.putMouth(one);
  delay(100);
  otto.putMouth(two);
  delay(100);
  otto.putMouth(three);
  delay(100);
  otto.putMouth(four);
  delay(100);
  otto.putMouth(five);
  delay(100);
  otto.putMouth(6);
  delay(100);
  otto.putMouth(7);
  delay(100);
  otto.putMouth(8);
  delay(100);
  otto.putMouth(9);
  delay(100);
  otto.putMouth(smile);
  delay(100);
  otto.putMouth(happyOpen);
  delay(100);
  otto.putMouth(happyClosed);
  delay(100);
  otto.putMouth(heart);
  delay(100);
  otto.putMouth(angry);
  delay(100);
  otto.putMouth(smallSurprise);
  delay(100);
  otto.putMouth(bigSurprise);
  delay(100);
  otto.putMouth(tongueOut);
  delay(100);
  otto.putMouth(confused);
  delay(100);
  otto.putMouth(21); // diagonal
  delay(100);
  otto.putMouth(27); // interrogation
  delay(100);
  otto.putMouth(23); // sad open
  delay(100);
  otto.putMouth(24); // sad closed
  delay(100);
  otto.putMouth(vamp1);
  delay(100);
  otto.putMouth(vamp2);
  delay(100);
  otto.putMouth(xMouth);
  delay(100);
  otto.putMouth(okMouth);
  delay(100);
  otto.putMouth(thunder);
  delay(100);
  otto.putMouth(lineMouth);
  delay(100);
  otto.putMouth(culito);
  delay(100);
  otto.putAnimationMouth(littleUuh, 0);
  delay(1000);
  otto.putAnimationMouth(dreamMouth, 0);
  delay(1000);
  otto.putAnimationMouth(dreamMouth, 1);
  delay(1000);
  otto.putAnimationMouth(dreamMouth, 2);
  delay(1000);
}
