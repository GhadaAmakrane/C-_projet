#include <iostream>
using namespace std;
#include "Recueil_Poesie.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Recueil_Poesie::Recueil_Poesie(string titre, string code, string ISBN, string inducateurVersProse)
    : Livre(titre, code, ISBN), inducateurVersProse(inducateurVersProse) {}

// Constructeur de recopie
Recueil_Poesie::Recueil_Poesie(Livre* livre,string inducateurVersProse) {
    Livre(livre);
    this->inducateurVersProse = inducateurVersProse;
}

// Getter pour le genre
string Recueil_Poesie::getInducateurVersProse() {
    return inducateurVersProse;
}

// Setter pour le genre
void Recueil_Poesie::setInducateurVersProse(string nouveauInducateurVersProse) {
    inducateurVersProse = nouveauInducateurVersProse;
}
