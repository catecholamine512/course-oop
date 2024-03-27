#include "Device.h"
#include <iostream>


Device::Device(int batteryLife) : _batteryLife(batteryLife) {};

void Device::ShowSpec() {
	std::cout << "this device's battery life is " << _batteryLife << std::endl;
}