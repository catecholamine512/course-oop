#include "ElectronicsShop.h"
#include <iostream>


using namespace std;


ElectronicsShop::ElectronicsShop(size_t capacity) : capacity(capacity) {
	stock = new IElectronics * [capacity];
}

ElectronicsShop::~ElectronicsShop() {
	delete[] stock;
}


Smartphone::Smartphone(int batteryLife, double screenSize) : 
	Device(batteryLife), 
	_screenSize(screenSize) 
{};

void Smartphone::ShowSpec() {
	cout << "this is a smartphone" << endl;
	cout << "its screen size is " << _screenSize << endl;
	cout << "and the battery life is " << _batteryLife << endl;
}


WashingMachine::WashingMachine(int weight, double powerConsumption) : 
	Appliance(weight), 
	_powerConsumption(powerConsumption) 
{};

void WashingMachine::ShowSpec() {
	cout << "this is a washing machine" << endl;
	cout << "its power consumption is " << _powerConsumption << endl;
	cout << "and the weight is " << _weight << endl;
}


Laptop::Laptop(int batteryLife, int weight, bool touchscreen) : 
	Device(batteryLife), 
	Appliance(weight), 
	_touchscreen(touchscreen) 
{};

void Laptop::ShowSpec() {
	cout << "this is a laptop" << endl;
	cout << "it has " << (_touchscreen ? "a" : "no") << " touchscreen" << endl;
	cout << "and the battery life is " << _batteryLife << endl;
	cout << "and the weight is " << _weight << endl;
}

