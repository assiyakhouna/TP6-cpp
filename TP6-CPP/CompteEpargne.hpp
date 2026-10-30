#ifndef COMPTEEPARGNE_HPP
#define COMPTEEPARGNE_HPP

#include "Compte.hpp"

class CompteEpargne : public Compte {
private:
    float tauxInteret;

public:
    CompteEpargne(int num, float s, float taux);

    float calculerInteret();
};

#endif