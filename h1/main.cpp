#include <iostream>
#include <iomanip>                      // kirjasto desimaalien määrän asettamiseen

int calcsum(int a, int b) {             // summan laskemiseen
    return a + b;
}

double calcdiv(int a, int b) {          // osamäärän laskemiseen
    if (b ==0) {
        std::cerr << "virhe. Jakaja ei nyt saa olla nolla." << std::endl;
        return 0;
    }
    double osamaara = static_cast<double>(a) / b;
    std::cout << "osamäärä: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        std::cerr << "Virhe: Ei sitä nollaa." << std::endl;
        return 0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    std::cout << "Anna kaksi kokonaislukua (a ja b): ";
    std::cin >> a >> b;

    int summa1 = calcsum(a, b);
    double osamaara1 = calcdiv(a, b);

    int summa2 = retSum(a, b);
    float osamaara2 = retDiv(a, b);

    std::cout << "Summa (calcsum): " << summa1 << std::endl;
    std::cout << "Osamäärä (calcdiv): " << std::fixed << std::setprecision(2) << osamaara1 << std::endl;

    std::cout << "Summa (retSum): " << summa2 << std::endl;
    std::cout << "Osamäärä (retDiv): " << std::fixed << std::setprecision(2) << osamaara2 << std::endl;

    return 0;
}
