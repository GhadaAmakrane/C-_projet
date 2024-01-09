#include "Livre.h"
#include <iostream>
using namespace std;

Livre :: Livre() {
    code = "";
    auteur = "";
    titre = "";
    editeur = "";
    ISBN = "";
    publicCible = "";
    etat = "";
    bibliotheque_origine = new Bibliotheque();
}

Livre :: Livre(string titre, string code, string ISBN) {
    titre = titre;
    code = code;
    ISBN = ISBN;
    auteur = "";
    editeur = "";
    publicCible = "";
    etat = "";
    bibliotheque_origine = new Bibliotheque();

}

string Livre::getCode() {
    return code;
}

string Livre::getAuteur() {
    return auteur;
}

string Livre::getTitre() {
    return titre;
}

string Livre::getEditeur() {
    return editeur;
}

string Livre::getISBN() {
    return ISBN;
}


string Livre::getPublicCible() {
    return publicCible;
}

string Livre::getEtat() {
    return etat;
}


Bibliotheque* Livre::getbibliotheque_origine() {
    return bibliotheque_origine;
} 


// Méthodes setters
void Livre::setAuteur(string nouvelAuteur) {
    auteur = nouvelAuteur;
}

void Livre::setTitre(string nouveauTitre) {
    titre = nouveauTitre;
}

void Livre::setEditeur(string nouvelEditeur) {
    editeur = nouvelEditeur;
}

void Livre::setISBN(string nouveauISBN) {
    ISBN = nouveauISBN;
}

void Livre::setPublicCible(string nouveauPublicCible) {
    publicCible = nouveauPublicCible;
}

void Livre::setEtat(string nouvelEtat) {
    etat = nouvelEtat;
}

void Livre::setbibliotheque_origine(Bibliotheque* nouvelle_bibliotheque) {
    bibliotheque_origine = nouvelle_bibliotheque;
}