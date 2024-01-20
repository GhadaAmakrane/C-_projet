//============================================================================
// Name        : C++Project.cpp
// Author      : Afek
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iostream>
#include "Livre.h"
#include "Noeud.h"
#include"ListeLivres.h"
#include "Bibliotheque.h"
#include <stdexcept>

int main() {
	Bibliotheque Bibliotheque1("Bibliotheque Centrale", "38 rue Joliot Curie 13013", "#1234");
	Bibliotheque Bibliotheque2("Bibliotheque Alcazar", "58 CRS Belsunce 13001", "#1235");
	Livre Livre1("Le discours de la méthode","#1","#1234");
	Livre1.setBibliothequeOrigine(&Bibliotheque1);
	Livre1.setAuteur("Descartes");
	Livre1.setEtat("libre");
	Livre1.setEditeur("Edwardo");
	Livre1.setPublicCible("adultes");
	Bibliotheque1.ajouterLivre(&Livre1);
	Livre Livre2("la planètte de singes","#2","1232");
	Livre2.setBibliothequeOrigine(&Bibliotheque1);
	Livre2.setAuteur("Pierre Boule");
	Livre2.setEtat("emprunté");
	Livre2.setEditeur("Theo");
	Livre2.setPublicCible("adultes");
	Bibliotheque1.ajouterLivre(&Livre2);
	Bibliotheque1.afficherLivres();
	Livre Livre3("C / C++ / C# - La bible du programmeur","#3","978-2-89377-285-1");
	Livre3.setAuteur("Kris Jamsa");
	Livre3.setEtat("libre");
	Livre3.setEditeur("Reynald Goulet");
	Livre3.setPublicCible("adultes");
	cout<<Bibliotheque1.getNombreLivres()<<endl;
	Bibliotheque2.ajouterLivre(&Livre3);
	Bibliotheque1.demanderLivreAutreBib("978-2-89377-285-1",Bibliotheque2);
	cout<<Livre3.getEtat()<<endl;
















	return 0;
}
