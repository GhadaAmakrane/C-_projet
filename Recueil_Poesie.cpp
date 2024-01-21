#include <iostream>
using namespace std;
#include "Recueil_Poesie.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Recueil_Poesie::Recueil_Poesie(string titre, string code, string ISBN, string inducateurVersProse)
    : Livre(titre, code, ISBN), inducateurVersProse(inducateurVersProse) {}


Recueil_Poesie::Recueil_Poesie(Livre* livre, string inducateurVersProse)
    : Livre(livre), inducateurVersProse(inducateurVersProse) {}

// Getter pour
string Recueil_Poesie::getInducateurVersProse() {
    return inducateurVersProse;
}

// Setter pour
void Recueil_Poesie::setInducateurVersProse(string nouveauInducateurVersProse) {
    inducateurVersProse = nouveauInducateurVersProse;
}
