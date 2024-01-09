#ifndef __BD_H__
#define __BD_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class BD:
		public Livre {
    private:
        string dessinateur ;
    public:
        BD(string,string,string,string);
        BD(Livre,string); //Recopie

        string getDessinateur(); //getter
        void setDessinateur(string); //setter
};

#endif // __BD_H__
