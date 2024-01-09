#include "Noeud.h"
#include <iostream>
using namespace std;

Noeud::Noeud(Livre *livre){
    info = livre;
    suivant = nullptr;
}
