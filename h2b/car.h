#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string br, string mo, int ye);
    void printData() const;
};

#endif // CAR_H
