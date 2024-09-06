// Sreejita Bhardwaj 
// 23070123130 
// experiment 13: inheritance

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
    void fuel() 
    {
        cout << "This vehicle runs on fuel." << endl;
    }
};

// subclass of vehicle 
class Car : public Vehicle {
    public:
    void doors() {
        cout << "This car has 4 doors." << endl;
    }
};

// subclass of car 
class SportsCar : public Car {
    public:
    void maxSpeed() {
        cout << "speed: 200 mph." << endl;
    }
};

int main() {
    SportsCar myCar;
    myCar.fuel();
    myCar.doors();
    myCar.maxSpeed();

    return 0;
}
