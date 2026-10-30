#include "ProduitElectronique.hpp"

// Constructeur
ProduitElectronique::ProduitElectronique(string n, float p, int g)
    : Produit(n, p) {
    garantie = g;
}

// Redefinition de afficherInfos()
void ProduitElectronique::afficherInfos() {
    Produit::afficherInfos();

    cout << "Garantie : " << garantie << " ans" << endl;
}