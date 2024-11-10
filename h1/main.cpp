#include <iostream>
#include <cmath> // Tämä kirjasto tarvitaan pyöristämiseen

int main() {
    int a, b;

    std::cout << "Anna kaksi kokonaislukua (a ja b): ";
    std::cin >> a >> b;
    int summa = a + b;
    double osamaara = static_cast<double>(a) / b; //static_cast<double>(a) muuttaa kokonaisluvun a liukulukuarvoksi
                                                  //jolloin  saadaan tarkka desimaalitulos, kun jaetaan kokonailuku b:llä

    osamaara = std::round(osamaara * 100.0) / 100.0; //osamäärä * 100.0 siirtää desimaalia kaksi kertaa oikealle. std::round pyöristää lähimpään kokonaislukuun
                                                    // tulos jaetan 100.0, jotta palaudutaan kahedn desimaalin tarkkuuteen.
    std::cout << "Summa: " << summa << std::endl;
    std::cout << "Osamäärä: " << osamaara << std::endl;

    return 0; }
