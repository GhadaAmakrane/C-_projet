#include <iostream>
using namespace std;
#include "Recueil_Poesie.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Roman::Roman(string titre, string code, string ISBN, string inducateurVersProse)
    : Livre(titre, code, ISBN), genre(genre) {}

// Constructeur de recopie
Roman::Roman(Livre* livre,string inducateurVersProse) {
    Livre(livre);
    inducateurVersProse = inducateurVersProse;
}

// Getter pour le genre
string Roman::getInducateurVersProse() {
    return inducateurVersProse;
}

// Setter pour le genre
void Roman::setInducateurVersProse(string nouveauInducateurVersProse) {
    inducateurVersProse = nouveauInducateurVersProse;
}
