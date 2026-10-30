#include "Produit.hpp"

// Constructeur
Produit::Produit(string n, float p) {
    nom = n;
    prix = p;
}

// Methode virtuelle
void Produit::afficherInfos() {
    cout << "Nom : " << nom << endl;
    cout << "Prix : " << prix << " DH" << endl;
}

// Destructeur
Produit::~Produit() {
}