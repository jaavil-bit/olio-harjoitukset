#include "Car.h"


Car::Car(string br, string mo, int ye) : brand(br), model(mo), yearModel(ye) {}

void Car::printData() const{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}
