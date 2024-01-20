#include "Livre.h"
#include "Adherent.h"
#include <iostream>
using namespace std;

// Constructeur par défaut
Adherent::Adherent() {
    nom = "";
    prenom = "";
    adresse = "";
    age = 0;
    numeroAdherent = 0;
    capaciteMaxLivresEmpruntes = 10;
    livresEmpruntes = new Livre*[capaciteMaxLivresEmpruntes];
    nombreLivresEmpruntes = 0;
}

// Constructeur prenant les attributs spécifiques
Adherent::Adherent(string nom, string prenom, string adresse, int age) {
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->age=age;
    numeroAdherent = 0;
    capaciteMaxLivresEmpruntes = 10;
    livresEmpruntes = new Livre*[capaciteMaxLivresEmpruntes];
    nombreLivresEmpruntes = 0;
}

// Destructeur
Adherent::~Adherent() {
    delete[] livresEmpruntes;
}

// Getters et setters
string Adherent::getNom(){
    return nom;
}

void Adherent::setNom(string nom) {
    this->nom = nom;
}

int Adherent::getAge()  {
    return age;
}

void Adherent::setAge(int age) {
    this->age = age;
}

string Adherent::getPrenom() {
    return prenom;
}

void Adherent::setPrenom(string prenom) {
    this->prenom = prenom;
}

string Adherent::getAdresse()  {
    return adresse;
}

void Adherent::setAdresse(string adresse) {
    this->adresse = adresse;
}

int Adherent::getNumeroAdherent(){
    return numeroAdherent;
}

void Adherent::setNumeroAdherent(int Numero){
    numeroAdherent = Numero;
}

// Méthodes supplémentaires pour gérer les opérations de l'adhérent, comme emprunter et rendre des livres
void Adherent::emprunterLivre(Livre* livre) {
    if (nombreLivresEmpruntes < capaciteMaxLivresEmpruntes && livre->getEtat()=="libre") {
        livre->setEtat("prete");
        livresEmpruntes[nombreLivresEmpruntes] = livre;
        nombreLivresEmpruntes++;
    } else {
        cout<<"Vous puvez plus empruntés de livres . ";
    }
}

void Adherent::rendreLivre(string ISBN) {
    for (int i = 0; i < nombreLivresEmpruntes; ++i) {
        if (livresEmpruntes[i]->getISBN() == ISBN && livresEmpruntes[i]->getCode() == "code") {
            livresEmpruntes[i]->setEtat("libre");
            delete livresEmpruntes[i];
            livresEmpruntes[i] = new Livre();
            cout << "Le livre avec l'ISBN '" << ISBN << "' a été rendu par " << prenom << " " << nom << endl;
            nombreLivresEmpruntes--;
            break ;
        }
    }
    cout << "Ce livre n'a pas été emprunté par " << prenom << " " << nom << endl;
}

void afficherInfosAdherent(const Adherent& adherent) {
    cout << "Informations de l'adhérent (fonction amie) :" << endl;
    cout << "Nom: " << adherent.nom <<endl;
    cout << "Prénom: " << adherent.prenom << endl;
    cout << "Adresse: " << adherent.adresse <<endl;
    cout << "Numéro d'adhérent: " << adherent.numeroAdherent << endl;
    cout << "Livres empruntés: ";
    cout << endl;
}

bool Adherent::operator%(string ISBN){
    for (int i = 0; i < nombreLivresEmpruntes ; ++i) {
        if (livresEmpruntes[i]->getISBN() == ISBN) {
            return true;
            break;
        }
    }
    return false;
}



