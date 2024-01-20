#include <iostream>


using namespace std;
#include "Album.h"


// Constructeur prenant les attributs spécifiques et appelant le constructeur de Livre
Album::Album(string titre, string code, string ISBN, string illustration)
    : Livre(titre, code, ISBN), illustration(illustration) {}

// Constructeur de recopie
Album::Album(Livre livre, string illustration)
    : Livre(livre), illustration(illustration) {}

// Getter 
string Album::getIllustration() {
    return illustration;
}

// Setter 
void Album::setIllustration(string nouveauIllustration) {
	illustration = nouveauIllustration;
}
