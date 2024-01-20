#include <iostream>


using namespace std;
#include "BD.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
BD::BD(string titre, string code, string ISBN, string dessinateur)
    : Livre(titre, code, ISBN), dessinateur(dessinateur) {}

// Constructeur de recopie
BD::BD(Livre* livre, string dessinateur)
    : Livre(livre), dessinateur(dessinateur) {}

// Getter pour le genre
string BD::getDessinateur() {
    return dessinateur;
}

// Setter pour le genre
void BD::setDessinateur(string nouveauDessinateur) {
	dessinateur = nouveauDessinateur;
}
