#include "configuration.h"
#include "BluetoothModule.h"
#include "MeshService.h"
#include "main.h"
#include "concurrency/OSThread.h"
#include <assert.h>



BluetoothModule::BluetoothModule(): concurrency::OSThread("bluetooth")
{
}




int32_t BluetoothModule::runOnce()
{

    return 100; // Poll our GPIOs every 200ms (FIXME, make adjustable via protobuf arg)
}
