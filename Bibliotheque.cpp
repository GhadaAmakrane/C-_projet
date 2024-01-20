/*
 * Bibliotheque.cpp
 *
 *  Created on: 20 janv. 2024
 *      Author: AFEK
 */
#include "Livre.h"
#include "Noeud.h"
#include "ListeLivres.h"
#include "Bibliotheque.h"
#include <iostream>
#include <stdexcept>
#include "NotFoundException.h"
using namespace std;

Bibliotheque::Bibliotheque() {
    nom = "";
    adresse = "";
    code = "";
    capaciteMax = 100; // Valeur arbitraire pour la capacite maximale
    nombreLivres = 0;
    livres=ListeLivres();
}

// Constructeur prenant les attributs specifiques
Bibliotheque::Bibliotheque(string nom, string adresse, string code)
    : nom(nom), adresse(adresse), code(code) {
    capaciteMax = 100; // Valeur arbitraire pour la capacite maximale
    nombreLivres = 0;
    livres=ListeLivres();
}

void Bibliotheque::ajouterLivre(Livre* nouveauLivre) {
	try {
	        if (nombreLivres >= capaciteMax) {
	            throw out_of_range("Capacite maximale atteinte, impossible d'ajouter un nouveau livre.");
	        }

	        livres + nouveauLivre;
	        nombreLivres++;
	        // code du livre ? faudra vérifier s'il y a d'autres exemplaires
	        cout << "Livre " << nouveauLivre->titre << " ajoute avec succes a " << nom << "." << endl;
	    }
	catch (const exception& e) {
	        cout << "Erreur: " << e.what() << endl;
	    }
}

void Bibliotheque::supprimerLivre(string codeLivre) {
    Noeud* courant = livres.getTete();
    Noeud* precedent = nullptr;
    try {

        // Parcourez la liste pour trouver le noeud a supprimer
        while (courant != nullptr && courant->getInfo()->code != codeLivre) {
            precedent = courant;
            courant = courant->getSuivant();
        }
        if (courant==nullptr){
        	throw NotFoundException();
        }

       if (precedent != nullptr) { // le noeud est au milieux ou a la fin de la liste
           precedent->setSuivant(courant->getSuivant());
          }
       else { // le noeud est en tete de liste
              livres.setTete(courant->getSuivant());
            }
       cout << "Livre supprime avec succes." << endl;
       }
       catch (const std::exception& e) {
           cout << "Erreur: " << e.what() << endl;
        }
    }

void Bibliotheque::afficherLivres() {
    if (nombreLivres == 0) {
        cout << "La bibliotheque ne contient aucun livre pour le moment." << endl;
    } else {
        cout << "Livres dans "<< nom <<" :" <<endl;
        Noeud* courant = livres.getTete();
        while (courant != nullptr) {
        	Livre* livre = courant->getInfo();
            cout << "Code: " << livre->code << ", Titre: " << livre->titre<< ", Etat: " << livre->etat <<endl;
            courant = courant->getSuivant();
        }
    }
}


void Bibliotheque::acheterLivre(Livre* nouveauLivre) {
	try {
		if (nombreLivres >= capaciteMax) {
			throw out_of_range("Capacite maximale atteinte, impossible d'acheter un nouveau livre.");
		}
		cout << "Livre achete avec succes." << endl;
		this->ajouterLivre(nouveauLivre);
		nouveauLivre->bibliothequeOrigine=this;
	}
	catch (const exception& e) {
		        cout << "Erreur: " << e.what() << endl;
		    }
}

void Bibliotheque::demanderLivreAutreBib(string isbn, Bibliotheque autreBibliotheque) {
   Noeud* courant=autreBibliotheque.livres.getTete();
   try{
	   while (courant->getInfo()->ISBN != isbn and courant!=nullptr){
	  	   	   courant=courant->getSuivant();
	     }
	   if (courant==nullptr){
		   throw NotFoundException();
	   }
	   if (courant->getInfo()->etat== "libre") {
		   Livre* livreEmprunte = new Livre(courant->getInfo()); //copie indep
		   livreEmprunte->etat="emprunte";//enprunte dans la bibiliotheque qui demande
		   courant->getInfo()->etat="prete"; //prete dans la bibliotheque qui donne
		   cout << "Livre emprunte avec succes depuis l'autre bibliotheque." <<endl;
		   this->ajouterLivre(livreEmprunte);
	   }
   }
	   catch (const exception& e) {
		    cout << "Erreur: " << e.what() << endl;
		}
   }


void Bibliotheque::RendreLivre(Livre* livreARendre) {
}



// Getter pour le nom
string Bibliotheque::getNom() {
    return nom;
}

// Getter pour l'adresse
string Bibliotheque::getAdresse() {
    return adresse;
}

// Getter pour le code
string Bibliotheque::getCode() {
    return code;
}

// Getter pour les livres
ListeLivres Bibliotheque::getLivres() {
    return livres;
}
// Getter pour nombreLivres
int Bibliotheque::getNombreLivres(){
	return nombreLivres;
}
// Setter pour le nom
void Bibliotheque::setNom(string nouveauNom) {
    nom = nouveauNom;
}

// Setter pour l'adresse
void Bibliotheque::setAdresse(string nouvelleAdresse) {
    adresse = nouvelleAdresse;
}

// Setter pour le code
void Bibliotheque::setCode(string nouveauCode) {
    code = nouveauCode;
}

// Setter pour les livres
void Bibliotheque::setLivres(ListeLivres nouveauxLivres) {
	if (nouveauxLivres.getTaille()<=capaciteMax){
		livres = nouveauxLivres;
	}
	else{
		cout << "La liste contient trop de livres. On va prendre que les "<< capaciteMax <<" premiers."<< endl;
		Noeud* courant = nouveauxLivres.getTete();
		while (courant!=nullptr and nombreLivres < capaciteMax ){
			this->ajouterLivre(courant->getInfo());
			courant=courant->getSuivant();
		}

	}
}






