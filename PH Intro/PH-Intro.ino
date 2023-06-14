#include "DigiKeyboard.h"
#include <stdlib.h>

#define KEY_DOWN 0x51   // Keyboard Down Arrow
#define KEY_ENTER 0x28  //Return/Enter Key

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);

  //Windows + R Key
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  
  DigiKeyboard.delay(100);

  //Open Chrome to that link
  DigiKeyboard.println("chrome https://www.youtube.com/watch?v=QRtax4auSuA");  
  
  system("start chrome https://www.youtube.com/watch?v=QRtax4auSuA");
  //turn on led when program finishes
  digitalWrite(1, HIGH);  

