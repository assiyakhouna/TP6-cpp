#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <iostream>
#include <string>
using namespace std;

class Compte {
protected:
    int numero;
    float solde;

public:
    Compte(int num, float s);

    void deposer(float montant);
    void retirer(float montant);
};

#endif