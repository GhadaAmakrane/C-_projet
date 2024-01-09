#ifndef __BIBLIOTHEQUE_H__
#define __BIBLIOTHEQUE_H__

#include <iostream>
using namespace std;
#include "Livre.h"
#include "Noeud.h"
#include "ListeLivres.h"
class Livre;

class Bibliotheque {
    private :
        string nom;
        string adresse;
        string code;
        int capaciteMax;  // Nombre maximale de livres dans la bibliothèque
        int nombreLivres; // Nombre de livre dans la bibliothèque
        ListeLivres Livres;  // liste chainée des livres

    public:
        Bibliotheque(); //Constructeur par defaut
        Bibliotheque(string,string,string) ;// Constructeur 

        //getters
        string getNom();
        string getAdresse();
        string getCode();
        ListeLivres getLivres();

        //setters
        void setNom(string);
        void setAdresse(string);
        void setCode(string);
        void setLivres(ListeLivres);

        //Methodes
        void afficherLivres() ;
        void ajouterLivre(Livre*);
        ListeLivres chercheLivreParCatg(string);
        void demanderLivreAutreBib(string , Bibliotheque&);
        void acheterLivre(Livre&);
        void supprimerLivre(string);
        void RendreLivre(Livre&);

};

#endif // __BIBLIOTHEQUE_H__
