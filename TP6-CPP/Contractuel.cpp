#include "Contractuel.hpp"

// Constructeur
Contractuel::Contractuel(string n, int i, float salaire,
                         int duree, float taux)
    : Employe(n, i, salaire) {

    dureeContrat = duree;
    tauxHoraire = taux;
}

// Redefinition de afficherInfos()
void Contractuel::afficherInfos() {
    cout << "=== Employe Contractuel ===" << endl;

    Employe::afficherInfos();

    cout << "Duree du contrat : " << dureeContrat
         << " mois" << endl;

    cout << "Taux horaire : " << tauxHoraire
         << " DH" << endl;
}

// Calcul du salaire mensuel
float Contractuel::calculerSalaireMensuel(int heures) {
    return heures * tauxHoraire;
}