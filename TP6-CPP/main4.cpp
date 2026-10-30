#include <iostream>
#include "Permanent.hpp"
#include "Contractuel.hpp"
using namespace std;

int main() {

    // Creation d'un tableau dynamique de pointeurs
    Employe* employes[3];

    // Creation des employes
    employes[0] = new Permanent("Ahmed", 101, 6000, 5000);

    employes[1] = new Contractuel("Sara", 102, 4000, 12, 50);

    employes[2] = new Permanent("Youssef", 103, 7000, 6000);

    // Affichage des informations
    cout << "===== LISTE DES EMPLOYES =====" << endl;

    for (int i = 0; i < 3; i++) {
        employes[i]->afficherInfos();
        cout << "------------------------" << endl;
    }

    // Calcul du salaire du contractuel
    Contractuel* c = dynamic_cast<Contractuel*>(employes[1]);

    if (c != nullptr) {
        cout << "\nSalaire mensuel de Sara : "
             << c->calculerSalaireMensuel(160)
             << " DH" << endl;
    }

    // Liberation de la memoire
    cout << "\n===== DESTRUCTION DES OBJETS =====" << endl;

    for (int i = 0; i < 3; i++) {
        delete employes[i];
    }

    return 0;
}