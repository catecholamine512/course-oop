#include "Appliance.h"
#include <iostream>


Appliance::Appliance(int weight) : _weight(weight) {};

void Appliance::ShowSpec() {
	std::cout << "this appliance's weight is " << _weight << std::endl;
}