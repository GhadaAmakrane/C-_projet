/*
 * Bibliotheque.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef BIBLIOTHEQUE_H_
#define BIBLIOTHEQUE_H_
#include <iostream>
using namespace std;
#include "Livre.h"
#include "Noeud.h"
#include "ListeLivres.h"
#include <stdexcept>
class Livre;
class Noeud;
class ListeLivres;

class Bibliotheque {
    private :
        string nom;
        string adresse;
        string code;
        int capaciteMax;  // Nombre maximale de livres dans la bibliothèque
        int nombreLivres; // Nombre de livre dans la bibliothèque
        ListeLivres livres;  // liste chainée des livres

    public:
        Bibliotheque(); //Constructeur par defaut
        Bibliotheque(string,string,string) ;// Constructeur

        //Methodes
		   void afficherLivres();
		   void ajouterLivre(Livre*);
		   ListeLivres chercheLivreParCatg(string);
		   void demanderLivreAutreBib(string , Bibliotheque);
		   void acheterLivre(Livre*);
		   void supprimerLivre(string);
		   void RendreLivre(Livre*);

        //getters
        string getNom();
        string getAdresse();
        string getCode();
        ListeLivres getLivres();
        int getNombreLivres();

        //setters
        void setNom(string);
        void setAdresse(string);
        void setCode(string);
        void setLivres(ListeLivres);

};




#endif /* BIBLIOTHEQUE_H_ */
