

#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}

string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    cout << getName() << " is making pasta" << endl;
}
