#ifndef PRODUITALIMENTAIRE_HPP
#define PRODUITALIMENTAIRE_HPP

#include "Produit.hpp"

class ProduitAlimentaire : public Produit {
private:
    string dateExpiration;

public:
    ProduitAlimentaire(string n, float p, string date);

    void afficherInfos() override;
};

#endif