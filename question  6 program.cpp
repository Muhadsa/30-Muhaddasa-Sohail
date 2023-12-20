#include <iostream>
using namespace std;
struct Aircraft {
    double fuelConsumption; 
    double distance;        };
double calculateFuelEfficiency(const Aircraft& aircraft) {
    return 1.0 / aircraft.fuelConsumption; 
}
int main() {
    Aircraft aircraft;
     cout << "Enter the fuel consumption (in liters per kilometer): "<<endl;
    cin >> aircraft.fuelConsumption;
    cout << "Enter the distance traveled (in kilometers): "<<endl;
    cin >> aircraft.distance;
    
    
    double fuelEfficiency = calculateFuelEfficiency(aircraft);
    cout << "The fuel efficiency of the aircraft is: " << fuelEfficiency << " kilometers per liter" <<endl;
    
    
}




