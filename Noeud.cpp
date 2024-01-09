#include "Noeud.h"
#include <iostream>
using namespace std;

Noeud::Noeud(){
    info = NULL;
    suivant = nullptr;
    
}
Noeud::Noeud(Livre livre){
    info = &livre;
    suivant = nullptr;
}
