
#include "btnFunctions.h"

void setup()
{
  Serial.begin(9600);
  pinMode(MOS_PIN, OUTPUT);
  butt1.setDebounce(10);      // настройка антидребезга (по умолчанию 80 мс)
  butt1.setTimeout(1000);     // настройка таймаута на удержание (по умолчанию 500 мс)
  butt1.setClickTimeout(600); // настройка таймаута между кликами (по умолчанию 300 мс)
  butt1.setType(HIGH_PULL);
  butt1.setDirection(NORM_OPEN);
}

void loop()
{
  butt1.tick();

  if (butt1.isClick())
  {
    
  }
  if (butt1.isSingle())
  {
    flashLight();
  }

  if (butt1.isDouble())
  {
    mainLight();
  }
}

