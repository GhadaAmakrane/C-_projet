#ifndef __RECUEIL_POESIE_H__
#define __RECUEIL_POESIE_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class Recueil_Poesie : public Livre {
    private:
        string indicateurVersProse;

    public:

        Recueil_Poesie(string,string,string,string);
        Recueil_Poesie(Livre*,string); // Constrcteur de recopie

        //getter

        string getIndicateurVersProse();

        //setter

        void setIndicateurVersProse(string);

};


#endif // __RECUEIL_POESIE_H__
