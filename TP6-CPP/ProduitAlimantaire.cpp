#include "ProduitAlimantaire.hpp"

// Constructeur
ProduitAlimentaire::ProduitAlimentaire(string n, float p, string date)
    : Produit(n, p) {
    dateExpiration = date;
}

// Redefinition de afficherInfos()
void ProduitAlimentaire::afficherInfos() {
    Produit::afficherInfos();

    cout << "Date d'expiration : " << dateExpiration << endl;
}