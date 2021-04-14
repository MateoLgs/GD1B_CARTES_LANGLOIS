#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include <string>

class Monstre{

    private:
        std::string _nom;
        int _pv;
        int _degats;
        bool _vivant;
        bool _epuisement;

    public:
        Monstre();
        Monstre(std::string nom, int pv, int degats, bool vivant, bool epuisement);
        void afficher(std::string nom, int pv, int degats, bool vivant, bool epuisement);
        void attaque(std::string cible);
        void gotHit(int pv);
        bool epuisement(bool epuisement);
        void verifVivant(bool vivant, int pv);
 
        std::string recupNom();
        int recupAttaque();
        int recupVies();
        bool recupVivant();
        bool recupEpuisement();
};



#endif