#include "Mage.h"
#include <iostream>
#include <string>
#include <vector>


Mage::Mage(): _nom("Mage1"), _pv(20){

}

Mage::Mage(std::string nom, int pv): _nom(nom), _pv(pv) {

}

void Mage::afficher(){
    if(_vivant==true){
    std::cout << "Nom: " << _nom << " || PV: " << _pv  << std::endl;
    std::cout << "Monstres Actifs:" << std::endl;
    for (int i = 0; i < _monstresActifs.size(); i++){
        _monstresActifs[i].afficher();
    }
    std::cout << std::endl;
    }
    if(_vivant==false){
      partieEnCours=false;  
    }
}

void Mage::creerMonstre(Monstre monstre){
    _monstresActifs.push_back(monstre);
}

void Mage::gotHit(int degats){
    _pv -= degats;
}

void Mage::monstreAttaque(){

    for (int i = 0; i < _monstresActifs.size(); i++){
       std::cout <<"Quelle est votre cible?"<< std::endl;
       std::cin >> std::string cible >>std::endl ;
       _monstresActifs[i].attaque(cible);
      }
}

void Mage::tuerMonstres(){
    for (int i = 0; i < _monstresActifs.size(); i++){
        if (_monstresActifs[i].recupVies() <= 0){
            _monstresActifs[i].erase();
        }
    }
}



