/*
 * ListeLivres.cpp
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */
#include <iostream>
using namespace std;
#include "Noeud.h"
#include "ListeLivres.h"
class Noeud;

ListeLivres::ListeLivres(){
    tete = nullptr;
    taille = 0;
}

ListeLivres& ListeLivres::operator+(Livre* livre){
	Noeud* nouveauNoeud =new Noeud(livre);
	nouveauNoeud->setSuivant(this->tete);
	this->tete = nouveauNoeud;
	taille+=1;
	return *this;
}




