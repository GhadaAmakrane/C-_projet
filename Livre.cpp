
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
    bibliothequeOrigine = new Bibliotheque();
}

Livre :: Livre(string titre, string code, string ISBN) {
    this->titre = titre;
    this->code = code;
    this->ISBN = ISBN;
    auteur = "";
    editeur = "";
    publicCible = "";
    etat = "";
    bibliothequeOrigine = new Bibliotheque();

}

Livre:: Livre(Livre* livre) {
        if (livre != nullptr) {
            code = livre->code;
            auteur = livre->auteur;
            titre = livre->titre;
            editeur = livre->editeur;
            ISBN = livre->ISBN;
            publicCible = livre->publicCible;
            etat = livre->etat;

            // Copie profonde du pointeur Bibliotheque
            if (livre->bibliothequeOrigine != nullptr) {
                bibliothequeOrigine = new Bibliotheque(*livre->bibliothequeOrigine);
            } else {
                bibliothequeOrigine = nullptr;
            }
        } else {
            // Si le pointeur est nul, initialiser les attributs à des valeurs par défaut
            code = "";
            auteur = "";
            titre = "";
            editeur = "";
            ISBN = "";
            publicCible = "";
            etat = "";
            bibliothequeOrigine = nullptr;
        }
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


Bibliotheque* Livre::getBibliothequeOrigine() {
    return bibliothequeOrigine;
}


// Méthodes setters
void Livre::setAuteur(string nouvelAuteur) {
    auteur = nouvelAuteur;
}

void Livre::setCode(string nouveauCode) {
    code = nouveauCode;
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

void Livre::setBibliothequeOrigine(Bibliotheque* nouvelleBibliotheque) {
    bibliothequeOrigine = nouvelleBibliotheque;
}




