#include <iostream>

using namespace std;

class DataBundle {
private:
    int dataVolume;

public:
    DataBundle() {
        dataVolume = 500;
    }
    DataBundle(int initialVolume) : dataVolume(initialVolume) {}

    void checkData() {
        cout << "Remaining data: " << dataVolume << " MB" << endl;
        int usage;
        cout << "Enter data used (in MB): ";
        cin >> usage;
        dataVolume -= usage;
        if (dataVolume <= 0) {
            cout << "All data has been used." << endl;
        }
    }
};

int main() {
    cout << "Choose a data bundle (in MB):" << endl;
    cout << "1. 500" << endl;
    cout << "2. 1000" << endl;
    cout << "3. 2000" << endl;
    int choice;
    cin >> choice;
    int selectedVolume;
    if (choice == 1) {
        selectedVolume = 500;
    } else if (choice == 2) {
        selectedVolume = 1000;
    } else if (choice == 3) {
        selectedVolume = 2000;
    } else {
        cout << "Invalid choice, using default 500 MB." << endl;
        selectedVolume = 500;
    }
    DataBundle myBundle(selectedVolume);
    myBundle.checkData();
    myBundle.checkData();
    return 0;
}
