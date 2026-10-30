#ifndef PRODUITELECTRONIQUE_HPP
#define PRODUITELECTRONIQUE_HPP

#include "Produit.hpp"

class ProduitElectronique : public Produit {
private:
    int garantie;

public:
    ProduitElectronique(string n, float p, int g);

    void afficherInfos() override;
};

#endif