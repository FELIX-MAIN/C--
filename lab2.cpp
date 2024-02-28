#include <iostream>
#include <string>

using namespace std;

// Base class
class Car {
protected:
    string brand;
    string hornType;
public:
    Car(string b, string h) : brand(b), hornType(h) {}

    virtual void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Horn Type: " << hornType << endl;
    }
};

// Derived class for Electric cars
class ElectricCar : public Car {
private:
    string model;
public:
    ElectricCar(string b, string m, string h) : Car(b, h), model(m) {}

    void displayInfo() override {
        Car::displayInfo(); // Call base class method to display brand and horn type
        cout << "Model: " << model << endl;
    }
};

// Derived class for Gasoline cars
class GasolineCar : public Car {
private:
    string model;
public:
    GasolineCar(string b, string m, string h) : Car(b, h), model(m) {}

    void displayInfo() override {
        Car::displayInfo(); // Call base class method to display brand and horn type
        cout << "Model: " << model << endl;
    }
};

int main() {
    ElectricCar electricCar("Tesla", "Model S", "Melodious");
    GasolineCar gasolineCar("Toyota", "Corolla", "Loud");

    cout << "Electric Car Information:" << endl;
    electricCar.displayInfo();
    cout << endl;

    cout << "Gasoline Car Information:" << endl;
    gasolineCar.displayInfo();

    return 0;
}
