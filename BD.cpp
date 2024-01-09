#include "BD.h"


#include <iostream>
using namespace std;

BD::BD(string titre, string code,string ISBN, string dessinateur)
    : Livre(titre, code, ISBN), dessinateur(dessinateur) {}


BD::BD(Livre livre, string dessinateur)
    : Livre(livre), dessinateur(dessinateur) {}


// Getter
string BD::getDessinateur() {
    return dessinateur;
}

// Setter
void BD::setDessinateur(string nouveauDessinateur) {
	dessinateur = nouveauDessinateur;
}
