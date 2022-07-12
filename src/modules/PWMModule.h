#pragma once


/**
 * A simple example module that just replies with "Message received" to any message it receives.
 */
class PWMModule : private concurrency::OSThread
{
  public:
    /** Constructor
     * name is for debugging output
     */
    PWMModule();
    int32_t setup();
    int32_t set_bottom_servo_pwm(int32_t);

  protected:

    virtual int32_t runOnce() override;
};

extern PWMModule *pwmmodule;


void setBottomServoDuty(int newDutyCycle);