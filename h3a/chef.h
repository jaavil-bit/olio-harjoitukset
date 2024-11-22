#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(string name);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected:  // Muutin "private:" funktion "protected" funktioksi, jotta aliluokka voi käyttää "name" muuttujaa
    string name;
};

#endif // CHEF_H
