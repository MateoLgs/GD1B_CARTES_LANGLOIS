#include <iostream>
#include <string>

#include "Monstre.cpp"
#include "Mage.cpp"

int main(){

    Monstre monstre1 = Monstre();
    Monstre monstre2 = Monstre("Monstre1", 2, 2, false, true);   
 

    Mage mage1 = Mage("Mage1", 20);
    Mage mage2 = Mage("Mage2", 20);
       mage2.creerMonstre(monstre2);

    std::string choixCreaMonstre;

    std::string nom;
    int pv;
    int degats;


    bool partieEnCours = true;


    while (partieEnCours){


        std::cout << "Créer un monstre? Oui ou Non ?";
        std::cin >> choixCreaMonstre;
        if (choixCreaMonstre == "Y"){
            std::cout << "Nom du Monstre ?";
            std::cin >> nom;

            std::cout << "PV du monstre ?";
            std::cin >> pv;

            std::cout << "Dégats du monstre ?";
            std::cin >> degats;

            mage1.creerMonstre(Monstre(nom, pv, degats, false, true));
        }




        mage1.monstreAttaque();
        mage2.monstreAttaque();
 
        mage1.tuerMonstres();
        mage2.tuerMonstres();

        mage1.afficher();
        mage2.afficher();


    }


    return 0;
}
/////////////////////////////////////////////////
/////////////////////////////////////////////////
//A Cause d'un problème sur VSC, je n'ai pas pu tester le programme.
// Tout a été fait à l'aveugle
/////////////////////////////////////////////////
/////////////////////////////////////////////////