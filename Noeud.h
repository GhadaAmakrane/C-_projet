

#ifndef NOEUD_H_
#define NOEUD_H_
#include <iostream>
using namespace std;
#include "Livre.h"
class Livre;
class Noeud {
    private:
        Livre* info;  // Pointeur vers un livre
        Noeud* suivant;  // Pointeur vers le prochain noeud dans la liste
    public:
        Noeud();
        Noeud(Livre*);
        Livre* getInfo(){
        	return this->info;
        }
        void setInfo(Livre* livre){
        	info=livre;
        }
        Noeud* getSuivant(){
        	return this-> suivant;
        }
        void setSuivant(Noeud* noeud){
        	this->suivant=noeud;
        }

};




#endif /* NOEUD_H_ */
