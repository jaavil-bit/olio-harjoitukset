#ifndef CAR_H
#define CAR_H

#include <Car.h>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(string br);
    void setModel(string mo);
    void setYearModel(int ye);
    void printData();
};

#endif // CAR_H
