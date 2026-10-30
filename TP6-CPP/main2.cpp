#include <iostream>
#include "CompteEpargne.hpp"
using namespace std;

int main() {

    // Creation d'un compte epargne
    CompteEpargne c1(12345, 10000, 5);

    cout << "Numero du compte : 12345" << endl;

    // Affichage du solde initial
    cout << "Solde initial : 10000 DH" << endl;

    // Depot
    cout << "\n--- Depot ---" << endl;
    c1.deposer(2000);

    // Retrait
    cout << "\n--- Retrait ---" << endl;
    c1.retirer(1000);

    // Calcul de l'interet
    cout << "\n--- Calcul de l'interet ---" << endl;
    cout << "Interet : " << c1.calculerInteret() << " DH" << endl;

    return 0;
}