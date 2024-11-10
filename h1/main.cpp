#include <iostream>
#include <iomanip> // tätä kirjastoa käytän desimaalien asettamiseen

using namespace std;

void calcSum(int a, int b) {
    int summa = a + b;
    cout << "Summa: " << summa << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cerr << "Virhe: Jakaja ei saa olla nolla." << endl;
        return;
    }
    double osamaara = static_cast<double>(a) / b;
    cout << "Osamäärä: " << fixed << setprecision(2) << osamaara << endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cerr << "Virhe: Jakaja ei saa olla nolla." << endl;
        return 0.0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    cout << "Anna kaksi kokonaislukua (a ja b): ";
    cin >> a >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "Summa (retSum): " << summa << endl;
    cout << "Osamäärä (retDiv): " << fixed << setprecision(2) << osamaara << endl;

    return 0;
}
