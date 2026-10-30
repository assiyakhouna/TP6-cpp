#include "Permanent.hpp"

// Constructeur
Permanent::Permanent(string n, int i, float salaire, float prime)
    : Employe(n, i, salaire) {
    primeAnnuelle = prime;
}

// Redefinition de afficherInfos()
void Permanent::afficherInfos() {
    cout << "=== Employe Permanent ===" << endl;

    Employe::afficherInfos();

    cout << "Prime annuelle : " << primeAnnuelle << " DH" << endl;
}