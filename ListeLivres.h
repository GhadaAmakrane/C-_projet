/*
 * ListeLivres.h
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */

#ifndef LISTELIVRES_H_
#define LISTELIVRES_H_
#include <iostream>
using namespace std;
#include "Livre.h"
#include "Noeud.h"
class Livre;
class Noeud;

class ListeLivres {
    private:
        Noeud* tete;  // Pointeur vers la tete
        int taille;
    public:
        ListeLivres(); // Constructeur par d��faut
        ListeLivres& operator+(Livre* livre); // Ajouter un livre
        //void operator-(const Livre* livre); // Supprimer un livre
        bool chercherLivre(Livre* livre); // Chercher un livre

        Noeud* getTete(){
        	return this->tete;
        }
        int getTaille(){
        	return this->taille;
        }
        void setTete(Noeud* noeud){
        	tete=noeud;
        }
};




#endif /* LISTELIVRES_H_ */
