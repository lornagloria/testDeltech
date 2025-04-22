#include <iostream>
#include <string>

using namespace std;

class BusTicket {
private:
    int fareAmount;
    string destination;

public:
    void bookTicket(string place, int fare) {
        destination = place;
        fareAmount = fare;
    }

    void showTicket(string currentLocation) {
        cout << "Current Location: " << currentLocation << endl;
        cout << "Destination: " << destination << endl;
        cout << "Fare: " << fareAmount << endl;
    }
};

int main() {
    string currentLocation;
    string destination;
    int fare;

    cout << "Enter current location: ";
    cin >> currentLocation;
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter fare paid: ";
    cin >> fare;

    BusTicket myTicket;
    myTicket.bookTicket(destination, fare);
    cout << "\n" << endl;
    cout << "Booking Information:" << endl;
    myTicket.showTicket(currentLocation);

    return 0;
}
