#include <iostream>
using namespace std;
#include "Recueil_Poesie.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Receuil_Poesie::Receuil_Poesie(string titre, string code, string ISBN, string inducateurVersProse)
    : Livre(titre, code, ISBN), inducateurVersProse(inducateurVersProse) {}

// Constructeur de recopie
Receuil_Poesie::Receuil_Poesie(Livre* livre,string inducateurVersProse) {
    Livre(livre);
    inducateurVersProse = inducateurVersProse;
}

// Getter pour le genre
string Receuil_Poesie::getInducateurVersProse() {
    return inducateurVersProse;
}

// Setter pour le genre
void Receuil_Poesie::setInducateurVersProse(string nouveauInducateurVersProse) {
    inducateurVersProse = nouveauInducateurVersProse;
}
