#define BTN_PIN 2 // кнопка подключена сюда (BTN_PIN --- КНОПКА --- GND)
// fet
#define MOS_PIN 3
// end fet
#include "GyverButton.h"
GButton butt1(BTN_PIN);

int btnValue = 0;
bool btnState = false;

