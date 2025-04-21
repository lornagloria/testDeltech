#include <iostream>
using namespace std;

class DataBundle {
private:
    int dataVolume;

public:
    DataBundle() : dataVolume(500) {
        cout << "Default data bundle of 500MB activated." << endl;
    }

    DataBundle(int volume) : dataVolume(volume) {
        cout << " data bundle of " << dataVolume << "MB activated." << endl;
    }

    void checkData() {
        cout << "Remaining data: " << dataVolume << "MB" << endl;
    }

    void useData(int amount) {
        if (amount <= dataVolume && amount > 0) {
            dataVolume -= amount;
            cout << amount << "MB of data used." << endl;
        } else if (amount <= 0) {
            cout << "Invalid data usage amount." << endl;
        } else {
            cout << "Insufficient data balance." << endl;
        }
    }

    void activateData(int volume) {
        dataVolume = volume;
        cout << volume << "MB of data activated." << endl;
    }
};

int main() {
    DataBundle defaultBundle;
    defaultBundle.checkData();
    defaultBundle.useData(200);
    defaultBundle.checkData();

    cout << "\n How many MB do you want to activate:" << endl;
    int activatedAmount;
    cin >> activatedAmount;

    DataBundle customBundle;
    customBundle.activateData(activatedAmount);

    int dataUsed = 3;
    customBundle.useData(dataUsed);
    customBundle.checkData();

    return 0;
}