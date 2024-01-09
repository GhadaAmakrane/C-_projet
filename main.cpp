#include <iostream>
using namespace std;

#include <iostream>
#include "Adherent.h"
#include "Bibliotheque.h"
#include "Livre.h"
#include "Piece_Theatre.h"
#include "Receuil_Poesie.h"
#include "Roman.h"

int main() {
    Bibliotheque Bibliotheque1("Bibliotheque Centrale", "6 rue Louis Neel", "#1234");
    Livre Livre1("Le discours de la méthode","#1","#1234");
    Livre1.setbibliotheque_origine(&Bibliotheque1);
    Livre1.setAuteur("Descartes");
    Livre1.setEtat("non emprunté");
    Livre1.setEditeur("Edwardo");
    Livre1.setPublicCible("adultes");
    Bibliotheque1.ajouterLivre(&Livre1);
    cout << "Hello, World!" << endl;
    cout << "\n------------------------------------\n" << endl;
    cout << "------------------------------------\n" << endl;
    cout << "------------------------------------\n" << endl;
    cout << "------------------------------------\n" << endl;
    return 0;
}