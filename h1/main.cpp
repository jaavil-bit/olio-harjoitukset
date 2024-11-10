#include <iostream>
#include <iomanip>

void calcSum(int a, int b) {
    int summa = a + b;
    std::cout << "Summa: " << summa << std::endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        std::cerr << "virheilmoitus, koska niin käskettiin, jos jakaja on nolla ." << std::endl;
        return;
    }
    double osamaara = static_cast<double>(a) / b;
    std::cout << "Osamäärä: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        std::cerr << "virheilmoitus, koska niin käskettiin, jos jakaja on nolla." << std::endl;
        return 0.0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    std::cout << "Anna kokonaisluvut (a ja b): ";
    std::cin >> a >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    std::cout << "Summa (retSum): " << summa << std::endl;
    std::cout << "Osamäärä (retDiv): " << std::fixed << std::setprecision(2) << osamaara << std::endl;

    return 0;
}

