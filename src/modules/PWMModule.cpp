#include "configuration.h"
#include "PWMModule.h"
#include "MeshService.h"
#include "main.h"
#include "concurrency/OSThread.h"
#include <assert.h>


const int bottomServoPin = 33; 
const int topServoPin = 32;  

const int bottomServoCh = 0;
const int topServoCh = 1;


const int freq = 50;
const int resolution = 8;

int bottomServoDuty = 0;


void setBottomServoDuty(int newDutyCycle)
{
    //ledcWrite(bottomServoCh, newDutyCycle);
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
        // changing the LED brightness with PWM
        ledcWrite(bottomServoCh, dutyCycle);
        delay(15);
    }
}


PWMModule::PWMModule(): concurrency::OSThread("servo_upwm")
{
    ledcSetup(bottomServoCh, freq, resolution);
    ledcSetup(topServoCh, freq, resolution);

    ledcAttachPin(bottomServoPin, bottomServoCh);
    ledcAttachPin(topServoPin, topServoCh);

}


int32_t PWMModule::runOnce()
{


    //ledcWrite(bottomServoCh, bottomServoDuty);


    //for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    //    // changing the LED brightness with PWM
    //    ledcWrite(bottomServoCh, dutyCycle);
    //    delay(15);
    //}

    return 200; // Poll our GPIOs every 200ms (FIXME, make adjustable via protobuf arg)
}

