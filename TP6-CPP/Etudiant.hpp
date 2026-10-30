#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "Personne.hpp"

class Etudiant : public Personne {
private:
    string niveau;

public:
    Etudiant(string n, int a, string niv);

    void afficher();
};

#endif