#include "Monstre.h"
#include <iostream>
#include <string>

Monstre::Monstre(): _nom("Monstre1"),_pv(3), _degats(3), _epuisement(false), _vivant(true){

}

Monstre::Monstre(std::string nom, int pv, int degats, bool epuisement, bool vivant): _nom(nom) ,_pv(pv), _degats(degats), _epuisement(false),_vivant(true){

}

void Monstre::attaque(std::string cible){
    if (_epuisement == true){
        cible.gotHit(_degats);
        _epuisement = false;
    }

    else if (_epuisement==false){
        std::cout << "Le monstre ne peut pas attaquer, il est épuisé" << std::endl;
    }
}
void Monstre::gotHit(int _degats){
    _pv-= _degats;
}
bool Monstre::epuisement(bool epuisement){
    if(epuisement==true){
        epuisement=false;
    }
}

void Monstre::afficher(std::string nom, int pv, int degats, bool vivant, bool epuisement){
    if(vivant==true){
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "PV: " << pv << std::endl;
    std::cout << "Degats: " << degats << std::endl;
    std::cout << "Epuisé: " << ((_epuisement) ? "Oui" : "Non") << std::endl;
}
    else{}
}

void Monstre::verifVivant(bool vivant, int _pv){
    if (_pv <= 0){
        _pv = 0;
        _vivant = false;
    }
}
std::string Monstre::recupNom(){
    return _nom;
}

int Monstre::recupVies(){
    return _pv;
}

int Monstre::recupAttaque(){
    return _degats;
}

bool Monstre::recupVivant(){
    return _vivant;
}

bool Monstre::recupEpuisement(){
    return _epuisement;
}

