
// Problem 7: Multiple Inheritance with Transport
#include <iostream>
using namespace std;

class LandTransport {
public:
    void landMove() {
        cout << "Moving on land." << endl;
    }
};

class WaterTransport {
public:
    void waterMove() {
        cout << "Moving on water." << endl;
    }
};

class AmphibiousVehicle : public LandTransport, public WaterTransport {
public:
    void switchMode() {
        cout << "Switching mode." << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.landMove();
    av.waterMove();
    av.switchMode();
    return 0;
}
