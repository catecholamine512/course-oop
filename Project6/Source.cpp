#include <iostream>


class Device {
	int _batteryLife;

public:
	Device(int batteryLife) : _batteryLife(batteryLife) {}
	virtual ~Device() = default;
	void ShowSpec() {
		std::cout << _batteryLife;
	}
};

class Player : public Device {
	int _totalTracks;

public:
	Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks) {}
	void ShowSpec() {
		Device::ShowSpec();
		std::cout << _totalTracks;
	}
};

int main(void) {
	return 0;
}