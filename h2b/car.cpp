#include "car.h"
#include <iostream>

void Car::setBrand(string br) {
    brand = br;
}
void Car::setModel(string mo) {
    model = mo;
}
void Car::setYearModel(int ye) {
    yearModel = ye;
}
void Car::printData() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}
