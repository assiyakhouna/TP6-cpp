#include "CompteEpargne.hpp"

// Constructeur
CompteEpargne::CompteEpargne(int num, float s, float taux)
    : Compte(num, s) {
    tauxInteret = taux;
}

// Methode calculerInteret
float CompteEpargne::calculerInteret() {
    return solde * tauxInteret / 100;
}