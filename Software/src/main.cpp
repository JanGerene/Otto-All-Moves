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

Otto otto_instance; // This is Otto!

///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
void setup()
{
  otto_instance.init(LEFTLEG, RIGHTLEG, LEFTFOOT, RIGHTFOOT, true, BUZZER); // Set the servo pins and BUZZER pin
  otto_instance.initMATRIX(DIN, CS, CLK, MATRIX_ORIENTATION);
  otto_instance.sing(S_connection); // Otto wake up!
  otto_instance.home();
  delay(50);
  otto_instance.playGesture(OttoHappy);
}

///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
///////////////////////////////////////////////////////////////////
void loop()
{
  otto_instance.walk(2, 1000, FORWARD);  // 2 steps, "TIME". IF HIGHER THE VALUE THEN SLOWER (from 600 to 1400), 1 FORWARD
  otto_instance.walk(2, 1000, BACKWARD); // 2 steps, T, -1 BACKWARD
  otto_instance.turn(2, 1000, LEFT);  // 3 steps turning LEFT
  otto_instance._tone(10, 3, 1);
  otto_instance.bendTones(100, 200, 1.04, 10, 10);
  otto_instance.home();
  delay(100);
  otto_instance.turn(2, 1000, RIGHT); // 3 steps turning RIGHT
  otto_instance.bend(1, 500, LEFT);   // usually steps =1, T=2000
  otto_instance.bend(1, 2000, RIGHT);
  otto_instance.shakeLeg(1, 1500, LEFT);
  otto_instance.home();
  delay(100);
  otto_instance.shakeLeg(1, 2000, RIGHT);
  otto_instance.moonwalker(3, 1000, 25, LEFT); 
  otto_instance.moonwalker(3, 1000, 25, RIGHT);
  otto_instance.crusaito(2, 1000, 20, LEFT);
  otto_instance.crusaito(2, 1000, 20, RIGHT);
  delay(100);
  otto_instance.flapping(2, 1000, 20, LEFT);
  otto_instance.flapping(2, 1000, 20, RIGHT);
  delay(100);
  otto_instance.swing(2, 1000, 20);
  otto_instance.tiptoeSwing(2, 1000, 20);
  otto_instance.jitter(2, 1000, 20); //(small T)
  otto_instance.updown(2, 1500, 20); // 20 = H "HEIGHT of movement"T
  otto_instance.ascendingTurn(2, 1000, 50);
  otto_instance.jump(1, 500); // It doesn't really jumpl ;P
  otto_instance.home();
  delay(100);
  otto_instance.sing(S_cuddly);
  otto_instance.sing(S_OhOoh);
  otto_instance.sing(S_OhOoh2);
  otto_instance.sing(S_surprise);
  otto_instance.sing(S_buttonPushed);
  otto_instance.sing(S_mode1);
  otto_instance.sing(S_mode2);
  otto_instance.sing(S_mode3);
  otto_instance.sing(S_sleeping);
  otto_instance.sing(S_fart1);
  otto_instance.sing(S_fart2);
  otto_instance.sing(S_fart3);
  otto_instance.sing(S_happy);
  otto_instance.sing(S_happy_short);
  otto_instance.sing(S_superHappy);
  otto_instance.sing(S_sad);
  otto_instance.sing(S_confused);
  otto_instance.sing(S_disconnection);
  delay(100);
  otto_instance.playGesture(OttoHappy);
  otto_instance.playGesture(OttoSuperHappy);
  otto_instance.playGesture(OttoSad);
  otto_instance.playGesture(OttoVictory);
  otto_instance.playGesture(OttoAngry);
  otto_instance.playGesture(OttoSleeping);
  otto_instance.playGesture(OttoFretful);
  otto_instance.playGesture(OttoLove);
  otto_instance.playGesture(OttoConfused);
  otto_instance.playGesture(OttoFart);
  otto_instance.playGesture(OttoWave);
  otto_instance.playGesture(OttoMagic);
  //otto.playGesture(OttoFail);
  otto_instance.home();
  delay(100);
  otto_instance.putMouth(zero);
  delay(100);
  otto_instance.putMouth(one);
  delay(100);
  otto_instance.putMouth(two);
  delay(100);
  otto_instance.putMouth(three);
  delay(100);
  otto_instance.putMouth(four);
  delay(100);
  otto_instance.putMouth(five);
  delay(100);
  otto_instance.putMouth(6);
  delay(100);
  otto_instance.putMouth(7);
  delay(100);
  otto_instance.putMouth(8);
  delay(100);
  otto_instance.putMouth(9);
  delay(100);
  otto_instance.putMouth(smile);
  delay(100);
  otto_instance.putMouth(happyOpen);
  delay(100);
  otto_instance.putMouth(happyClosed);
  delay(100);
  otto_instance.putMouth(heart);
  delay(100);
  otto_instance.putMouth(angry);
  delay(100);
  otto_instance.putMouth(smallSurprise);
  delay(100);
  otto_instance.putMouth(bigSurprise);
  delay(100);
  otto_instance.putMouth(tongueOut);
  delay(100);
  otto_instance.putMouth(confused);
  delay(100);
  otto_instance.putMouth(21); // diagonal
  delay(100);
  otto_instance.putMouth(27); // interrogation
  delay(100);
  otto_instance.putMouth(23); // sad open
  delay(100);
  otto_instance.putMouth(24); // sad closed
  delay(100);
  otto_instance.putMouth(vamp1);
  delay(100);
  otto_instance.putMouth(vamp2);
  delay(100);
  otto_instance.putMouth(xMouth);
  delay(100);
  otto_instance.putMouth(okMouth);
  delay(100);
  otto_instance.putMouth(thunder);
  delay(100);
  otto_instance.putMouth(lineMouth);
  delay(100);
  otto_instance.putMouth(culito);
  delay(100);
  otto_instance.putAnimationMouth(littleUuh, 0);
  delay(1000);
  otto_instance.putAnimationMouth(dreamMouth, 0);
  delay(1000);
  otto_instance.putAnimationMouth(dreamMouth, 1);
  delay(1000);
  otto_instance.putAnimationMouth(dreamMouth, 2);
  delay(1000);
}
