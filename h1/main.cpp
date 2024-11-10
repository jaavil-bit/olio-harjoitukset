#include <iostream>
#include <iomanip>

void calcSum(int a, int b) {
    int summa = a + b;
    std::cout << "Summa: " << summa << std::endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        std::cerr << "virheilimootus. Ei nollaa jakajaksi." << std::endl;
        return;
    }
    double osamaara = static_cast<double>(a) / b;
    std::cout << "Osamäärä: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
}

int main() {
    int a, b;

    std::cout << "Anna kokonaisluvut(a ja b): ";
    std::cin >> a >> b;

    calcSum(a, b);
    calcDiv(a, b);

    return 0;
}
