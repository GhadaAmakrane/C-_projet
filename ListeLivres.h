#ifndef __LISTELIVRES_H__
#define __LISTELIVRES_H__

#include <iostream>
using namespace std;
#include "Noeud.h"

class ListeLivres {
    private:
        Noeud *tete;  // Pointeur vers la tete
        Noeud *suivant;  // Pointeur vers le prochain nœud dans la liste
    public:
        ListeLivres(); // Constructeur par défaut
        ListeLivres(Livre);
};

#endif // __LISTELIVRES_H__
