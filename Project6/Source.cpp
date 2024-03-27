#include <iostream>
#include "ElectronicsShop.h"


int main(void) {
	ElectronicsShop shop(10);

	shop.stock[0] = new Laptop(10, 5, true);
	shop.stock[1] = new WashingMachine(20, 1500);
	shop.stock[2] = new Smartphone(24, 8);
	shop.stock[3] = new Smartphone(12, 5);
	shop.stock[4] = new Smartphone(12, 7);
	shop.stock[5] = new WashingMachine(10, 500);
	shop.stock[6] = new WashingMachine(15, 1000);
	shop.stock[7] = new Laptop(3, 2, false);
	shop.stock[8] = new Laptop(2, 1, false);
	shop.stock[9] = new Laptop(6, 4, true);

	while (true) {
		std::cout << "please enter a number from 1 to " << shop.capacity << " included to browse a device (0 to exit): ";
		size_t i; std::cin >> i;
		if (i == 0) break;
		--i;
		if (i >= shop.capacity) {
			std::cout << "your number is neither zero nor a valid index" << std::endl;
			continue;
		}
		shop.stock[i]->ShowSpec();
	}

	for (size_t i = 0; i < shop.capacity; ++i) delete shop.stock[i];
	
	return 0;
}