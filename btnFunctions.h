#include "btnDefines.h"
void flashLight(); //
void mainLight();

void mainLight()
{
    {
        if (btnState == false)
        {
            for (int i = 0; i < 250; i+=3)
            {
                analogWrite(MOS_PIN, i); // Minimum
                delay(20);
            }
            btnState = true;
            Serial.println(btnState); // проверка на удержание
        }
        else
        {
            for (byte i = 250; i < 0; i-=3)
            {
                analogWrite(MOS_PIN, i); // Minimum
                delay(20);
            }
            btnState = false;
            Serial.println(btnState); // проверка на удержание
        }
    }
}

void flashLight()
{
    if (btnState == true)
    {
        for (byte i = 0; i < 10; i++)
        {
            
            digitalWrite(MOS_PIN, LOW);
            delay(25);
            digitalWrite(MOS_PIN, HIGH);
            delay(25);
        }
        btnState = true;
    }
    else
    {
        for (byte i = 0; i < 10; i++)
        {
            digitalWrite(MOS_PIN, HIGH);
            delay(35);
            digitalWrite(MOS_PIN, LOW);
            delay(35);
        }
        btnState = false;
    }
}