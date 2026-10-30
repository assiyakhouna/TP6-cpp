#include <iostream>
#include "ProduitAlimantaire.hpp"
#include "ProduitElectronique.hpp"
using namespace std;

int main() {

    // Creation d'un produit alimentaire
    ProduitAlimentaire p1("Lait", 12, "30/11/2026");

    // Creation d'un produit electronique
    ProduitElectronique p2("Ordinateur", 6500, 2);

    cout << "=== Produit Alimentaire ===" << endl;
    p1.afficherInfos();

    cout << "\n=== Produit Electronique ===" << endl;
    p2.afficherInfos();

    return 0;
}