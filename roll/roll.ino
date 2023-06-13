#include "DigiKeyboard.h"

#define KEY_DOWN 0x51   // Keyboard Down Arrow
#define KEY_ENTER 0x28  //Return/Enter Key

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("chrome https://www.youtube.com/watch?v=QRtax4auSuA");  //smallest cmd window possible
  digitalWrite(1, HIGH);  //turn on led when program finishes
  DigiKeyboard.delay(13000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
}

void loop(){
    pinMode(1, OUTPUT);  //LED on Model A

}