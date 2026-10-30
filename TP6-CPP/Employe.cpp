#include "Employe.hpp"

// Constructeur
Employe::Employe(string n, int i, float salaire) {
    nom = n;
    id = i;
    salaireDeBase = salaire;
}

// Methode virtuelle
void Employe::afficherInfos() {
    cout << "Nom : " << nom << endl;
    cout << "ID : " << id << endl;
    cout << "Salaire de base : " << salaireDeBase << " DH" << endl;
}

// Destructeur virtuel
Employe::~Employe() {
    cout << "Destruction de l'employe : " << nom << endl;
}