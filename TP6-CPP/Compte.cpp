#include "Compte.hpp"

// Constructeur
Compte::Compte(int num, float s) {
    numero = num;
    solde = s;
}

// Methode deposer
void Compte::deposer(float montant) {
    if (montant > 0) {
        solde += montant;
        cout << "Depot effectue avec succes." << endl;
    } else {
        cout << "Montant invalide !" << endl;
    }
}

// Methode retirer
void Compte::retirer(float montant) {
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        cout << "Retrait effectue avec succes." << endl;
    } else {
        cout << "Solde insuffisant ou montant invalide !" << endl;
    }
}