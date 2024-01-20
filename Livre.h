/*
 * Livre.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef LIVRE_H_
#define LIVRE_H_
#include <iostream>
using namespace std;
#include "Bibliotheque.h"
class Bibliotheque;

class Livre {
    private:
        string code;
        string auteur;
        string titre;
        string editeur;
        string ISBN;
        string publicCible;
        string etat;
        Bibliotheque* bibliothequeOrigine;

    public:
    Livre();
    Livre(string,string,string) ;//on le definit par le titre , le code et l'ISBN
    Livre(Livre*); //constructeur de recopie
    // Déclaration d'amitié pour permettre à Bibliotheque d'accéder aux membres privés
    friend void Bibliotheque::ajouterLivre(Livre*);
    friend void Bibliotheque::demanderLivreAutreBib(string, Bibliotheque);
    friend void Bibliotheque::supprimerLivre(string);
    friend void Bibliotheque::afficherLivres();
    friend void Bibliotheque::acheterLivre(Livre*);
    friend void Bibliotheque::RendreLivre(Livre*);


    //getters
    string getCode() ;
    string getAuteur() ;
    string getTitre() ;
    string getEditeur() ;
    string getISBN() ;
    string getPublicCible() ;
    string getEtat() ;
    Bibliotheque* getBibliothequeOrigine();



    //setters
    void setAuteur(string );
    void setTitre(string);
    void setEditeur(string);
    void setISBN(string);
    void setPublicCible(string);
    void setEtat(string);
    void setBibliothequeOrigine(Bibliotheque*);



};




#endif /* LIVRE_H_ */
