#include <iostream>
using namespace std;
#include "Roman.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Roman::Roman(string titre, string code, string ISBN, string genre)
    : Livre(titre, code, ISBN), genre(genre) {}

Roman::Roman(Livre* livre, string genre)
    : Livre(livre), genre(genre) {}

// Getter pour le genre
string Roman::getGenre() {
    return genre;
}

// Setter pour le genre
void Roman::setGenre(string nouveauGenre) {
    genre = nouveauGenre;
}
