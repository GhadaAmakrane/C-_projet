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
            if (livre->bibliotheque_origine != nullptr) {
                bibliotheque_origine = new Bibliotheque(*livre->bibliotheque_origine);
            } else {
                bibliotheque_origine = nullptr;
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
            bibliotheque_origine = nullptr;
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