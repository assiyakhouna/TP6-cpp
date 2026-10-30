#ifndef CONTRACTUEL_HPP
#define CONTRACTUEL_HPP

#include "Employe.hpp"

class Contractuel : public Employe {
private:
    int dureeContrat;
    float tauxHoraire;

public:
    Contractuel(string n, int i, float salaire,
                int duree, float taux);

    void afficherInfos() override;

    float calculerSalaireMensuel(int heures);
};

#endif