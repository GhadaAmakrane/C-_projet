/*
 * Noeud.cpp
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */
#include "Noeud.h"
#include <iostream>
using namespace std;


Noeud::Noeud(){
    info = nullptr;
    suivant = nullptr;

}
Noeud::Noeud(Livre* livre){
    info = livre;
    suivant = nullptr;
}



