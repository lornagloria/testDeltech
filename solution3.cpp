#include <iostream>
#include <string>

using namespace std;

class BikeTrip {
public:
    string riderId;
    int distanceTravelled;

    void updateDistance(int newDistance) {
        if (newDistance >= 0) {
            distanceTravelled += newDistance;
            cout << "Distance updated successfully." << endl;
        } else {
            cout << "Invalid distance input." << endl;
        }
    }

    void displayTripDetails() {
        cout << "Rider Id: " << riderId << endl;
        cout << "Total Distance Travelled: " << distanceTravelled << " km" << endl;
    }
};

int main() {
    BikeTrip currentTrip;

    cout << "Enter the rider's ID: ";
    cin >> currentTrip.riderId;

    cout << "Enter the initial distance travelled (in km): ";
    cin >> currentTrip.distanceTravelled;

    cout << "Trip Details " << endl;
    currentTrip.displayTripDetails();

    cout << "Enter additional distance travelled (in km, enter 0 if none): ";
    int NewDistance;
    cin >> NewDistance;
    currentTrip.updateDistance(NewDistance);

    cout << " New Trip Details " << endl;
    currentTrip.displayTripDetails();

    return 0;
}