#pragma once
#include "IElectronics.h"


class Appliance : virtual public IElectronics {
protected:
	int _weight;

public:
	Appliance(int weight);
	void ShowSpec() override;
};

