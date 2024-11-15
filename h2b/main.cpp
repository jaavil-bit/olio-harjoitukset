#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main() {
    vector<Car> carList;

    Car car1("Saab", "900", 1985);
    Car car2("VolksWagen", "Taigo", 2020);
    Car car3("BMW", "i4", 2024);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Auton 2 tiedot:" << endl;
    carList[1].printData();

    cout << "\nJokaisen auton tiedot:" << endl;
    for (const auto& car : carList) {
        car.printData();
        cout << endl;
    }

    return 0;

}
