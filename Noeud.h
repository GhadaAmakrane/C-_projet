#ifndef __NOEUD_H__
#define __NOEUD_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class Noeud {
    private:
        Livre* info;  // Pointeur vers un livre
        Noeud* suivant;  // Pointeur vers le prochain nœud dans la liste
    public:
        Noeud(Livre*);
};

#endif // __NOEUD_H__
