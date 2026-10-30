#include "Etudiant.hpp"

// Constructeur
Etudiant::Etudiant(string n, int a, string niv)
    : Personne(n, a) {
    niveau = niv;
}

// Methode afficher
void Etudiant::afficher() {
    Personne::afficher();

    cout << "Niveau : " << niveau << endl;
}