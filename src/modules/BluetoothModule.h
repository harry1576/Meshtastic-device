#pragma once


/**
 * A simple example module that just replies with "Message received" to any message it receives.
 */
class BluetoothModule : private concurrency::OSThread
{
  public:
    /** Constructor
     * name is for debugging output
     */
    BluetoothModule();
    int32_t setup();

  protected:

    virtual int32_t runOnce() override;
};
