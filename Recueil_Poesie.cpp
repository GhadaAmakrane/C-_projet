#include <iostream>
using namespace std;
#include "Recueil_Poesie.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Recueil_Poesie::Recueil_Poesie(string titre, string code, string ISBN, string indicateurVersProse)
    : Livre(titre, code, ISBN), indicateurVersProse(indicateurVersProse) {}


Recueil_Poesie::Recueil_Poesie(Livre* livre, string indicateurVersProse)
    : Livre(livre), indicateurVersProse(indicateurVersProse) {}

// Getter pour
string Recueil_Poesie::getIndicateurVersProse() {
    return indicateurVersProse;
}

// Setter pour
void Recueil_Poesie::setIndicateurVersProse(string nouveauIndicateurVersProse) {
    indicateurVersProse = nouveauIndicateurVersProse;
}
