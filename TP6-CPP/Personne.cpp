#include "Personne.hpp"

// Constructeur
Personne::Personne(string n, int a) {
    nom = n;
    age = a;
}

// Methode afficher
void Personne::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << " ans" << endl;
}