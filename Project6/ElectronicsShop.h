#pragma once
#include "IElectronics.h"
#include "Device.h"
#include "Appliance.h"


// simple book-keeping struct
struct ElectronicsShop
{
public:
	const size_t capacity;
	IElectronics** stock;

	ElectronicsShop(size_t capacity);
	~ElectronicsShop();
};

// now define concrete classes

class Smartphone final : public Device {
	double _screenSize;

public:
	Smartphone(int batteryLife, double screenSize);
	void ShowSpec() override;
};

class WashingMachine final : public Appliance {
	double _powerConsumption;

public:
	WashingMachine(int weight, double powerConsumption);
	void ShowSpec() override;
};

class Laptop final : public Device, Appliance {
	bool _touchscreen;

public:
	Laptop(int batteryLife, int weight, bool touchscreen);
	void ShowSpec() override;
};

