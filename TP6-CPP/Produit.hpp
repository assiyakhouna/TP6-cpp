#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>
using namespace std;

class Produit {
protected:
    string nom;
    float prix;

public:
    Produit(string n, float p);

    virtual void afficherInfos();

    virtual ~Produit();
};

#endif