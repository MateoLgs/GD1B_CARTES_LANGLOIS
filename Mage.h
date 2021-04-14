#ifndef MAGE_H
#define MAGE_H

#include "Monstre.h"
#include <iostream>
#include <string>
#include <vector>

class Mage{

    private:
        std::string _nom;
        int _pv;
        std::vector<Monstre> _monstresActifs;
        bool _vivant;

    public:
        Mage();
        Mage(std::string nom, int pv);
        void afficher();
        void creerMonstre(Monstre monstre);
        void gotHit(int degats);
        void monstreAttaque();
        void tuerMonstres();
   


};

#endif