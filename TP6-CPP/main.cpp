#include <iostream>
#include "Etudiant.hpp"
using namespace std;

int main() {

    // Creation d'un objet Etudiant
    Etudiant e1("Ahmed", 20, "Licence 1");

    // Affichage des informations
    cout << "Informations de l'etudiant :" << endl;

    e1.afficher();

    return 0;
}