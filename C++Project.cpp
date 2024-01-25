
#include <iostream>
using namespace std;
#include <iostream>
#include "Livre.h"
#include "Noeud.h"
#include "ListeLivres.h"
#include "Bibliotheque.h"
#include <stdexcept>
#include "Piece_Theatre.h"
#include "Recueil_Poesie.h"
#include "Album.h"
#include "Roman.h"
#include "Adherent.h"

int main() {
    // Création de deux livres
    Livre livre1("Le Petit Prince", "123456", "9780141185620");
    livre1.setAuteur("Antoine de Saint-Exupéry");
    livre1.setEditeur("Gallimard");
    livre1.setPublicCible("18");
    livre1.setEtat("libre");
    livre1.setCode("1");


    Livre livre2("1984", "789012", "9780451524935");
    livre2.setAuteur("George Orwell");
    livre2.setEditeur("Secker & Warburg");
    livre2.setPublicCible("18");
    livre2.setEtat("libre");
    livre2.setCode("1");


    // Affichage des informations initiales des livres
    cout << "Informations initiales des livres :" << endl;
    cout << "Livre 1 :" << endl;
    cout << "Titre: " << livre1.getTitre() << endl;
    cout << "Auteur: " << livre1.getAuteur() << endl;
    cout << "Editeur: " << livre1.getEditeur() << endl;
    cout << "ISBN: " << livre1.getISBN() << endl;
    cout << "Public Cible: " << livre1.getPublicCible() << endl;
    cout << "Etat: " << livre1.getEtat() << endl;


    cout << "\nLivre 2 :" << endl;
    cout << "Titre: " << livre2.getTitre() << endl;
    cout << "Auteur: " << livre2.getAuteur() << endl;
    cout << "Editeur: " << livre2.getEditeur() << endl;
    cout << "ISBN: " << livre2.getISBN() << endl;
    cout << "Public Cible: " << livre2.getPublicCible() << endl;
    cout << "Etat: " << livre2.getEtat() << endl;


    // Copie du livre1 pour créer le livre3
    Livre livre3(&livre1);


    // Modification du livre3
    livre3.setCode("2");



    // Affichage des informations du livre3
    cout << "\nInformations du livre 3 :" << endl;
    cout << "Titre: " << livre3.getTitre() << endl;
    cout << "Auteur: " << livre3.getAuteur() << endl;
    cout << "Editeur: " << livre3.getEditeur() << endl;
    cout << "ISBN: " << livre3.getISBN() << endl;
    cout << "Public Cible: " << livre3.getPublicCible() << endl;
    cout << "Etat: " << livre3.getEtat() << endl;


        // Création d'une pièce de théâtre
    Piece_Theatre piece1("Hamlet", "PT123", "9780143128540", "XVI");
    piece1.setAuteur("William Shakespeare");
    piece1.setEditeur("Penguin Classics");
    piece1.setPublicCible("18");
    piece1.setEtat("libre");
    piece1.setCode("1");


    // Affichage des informations de la pièce de théâtre
    cout << "Informations de la pièce de théâtre :" << endl;
    cout << "Titre: " << piece1.getTitre() << endl;
    cout << "Auteur: " << piece1.getAuteur() << endl;
    cout << "Editeur: " << piece1.getEditeur() << endl;
    cout << "ISBN: " << piece1.getISBN() << endl;
    cout << "Public Cible: " << piece1.getPublicCible() << endl;
    cout << "Etat: " << piece1.getEtat() << endl;
    cout << "Siècle: " << piece1.getSiecle() << endl;


    // Copie de la pièce1 pour créer une autre pièce
    Piece_Theatre piece2(&piece1, "XVII");


    // Modification de la nouvelle pièce
    piece2.setTitre("Roméo et Juliette");
    piece2.setEditeur("Folio");
    piece2.setEtat("libre");


    // Affichage des informations de la nouvelle pièce
    cout << "\nInformations de la nouvelle pièce de théâtre :" << endl;
    cout << "Titre: " << piece2.getTitre() << endl;
    cout << "Auteur: " << piece2.getAuteur() << endl;
    cout << "Editeur: " << piece2.getEditeur() << endl;
    cout << "ISBN: " << piece2.getISBN() << endl;
    cout << "Public Cible: " << piece2.getPublicCible() << endl;
    cout << "Etat: " << piece2.getEtat() << endl;
    cout << "Siècle: " << piece2.getSiecle() << endl;



    // Création d'un recueil de poésie
    Recueil_Poesie recueil1("Les Fleurs du Mal", "RP001", "9780140426545", "Vers");
    recueil1.setAuteur("Charles Baudelaire");
    recueil1.setEditeur("Penguin Classics");
    recueil1.setPublicCible("18");
    recueil1.setEtat("libre");
    recueil1.setCode("1");


    // Affichage des informations du recueil de poésie
    cout << "Informations du recueil de poésie :" << endl;
    cout << "Titre: " << recueil1.getTitre() << endl;
    cout << "Auteur: " << recueil1.getAuteur() << endl;
    cout << "Editeur: " << recueil1.getEditeur() << endl;
    cout << "ISBN: " << recueil1.getISBN() << endl;
    cout << "Public Cible: " << recueil1.getPublicCible() << endl;
    cout << "Etat: " << recueil1.getEtat() << endl;
    cout << "Indicateur Vers/Prose: " << recueil1.getIndicateurVersProse() << endl;


    // Copie du recueil1 pour créer un autre recueil
    Recueil_Poesie recueil2(&recueil1, "Prose");


    // Modification du nouvel recueil
    recueil2.setTitre("Les Illuminations");
    recueil2.setEditeur("Folio");
    recueil2.setEtat("libre");
    recueil2.setCode("1");




    // Affichage des informations du nouvel recueil
    cout << "\nInformations du nouvel recueil de poésie :" << endl;
    cout << "Titre: " << recueil2.getTitre() << endl;
    cout << "Auteur: " << recueil2.getAuteur() << endl;
    cout << "Editeur: " << recueil2.getEditeur() << endl;
    cout << "ISBN: " << recueil2.getISBN() << endl;
    cout << "Public Cible: " << recueil2.getPublicCible() << endl;
    cout << "Etat: " << recueil2.getEtat() << endl;
    cout << "Indicateur Vers/Prose: " << recueil2.getIndicateurVersProse() << endl;
     // Création d'un roman
    Roman roman1("L'étranger", "R001", "9782070360425", "Fiction");
    roman1.setAuteur("Albert Camus");
    roman1.setEditeur("Gallimard");
    roman1.setPublicCible("18");
    roman1.setEtat("libre");
    roman1.setCode("1");


    // Affichage des informations du roman
    cout << "Informations du roman :" << endl;
    cout << "Titre: " << roman1.getTitre() << endl;
    cout << "Auteur: " << roman1.getAuteur() << endl;
    cout << "Editeur: " << roman1.getEditeur() << endl;
    cout << "ISBN: " << roman1.getISBN() << endl;
    cout << "Public Cible: " << roman1.getPublicCible() << endl;
    cout << "Etat: " << roman1.getEtat() << endl;
    cout << "Genre: " << roman1.getGenre() << endl;


    // Copie du roman1 pour créer un autre roman
    Roman roman2(&roman1, "Drame");


    // Modification du nouvel roman
    roman2.setTitre("La Peste");
    roman2.setEditeur("Folio");
    roman2.setEtat("libre");
    roman2.setCode("1");




    // Affichage des informations du nouvel roman
    cout << "\nInformations du nouvel roman :" << endl;
    cout << "Titre: " << roman2.getTitre() << endl;
    cout << "Auteur: " << roman2.getAuteur() << endl;
    cout << "Editeur: " << roman2.getEditeur() << endl;
    cout << "ISBN: " << roman2.getISBN() << endl;
    cout << "Public Cible: " << roman2.getPublicCible() << endl;
    cout << "Etat: " << roman2.getEtat() << endl;
    cout << "Genre: " << roman2.getGenre() << endl;


    // Création d'un album
    Album album1("Where the Wild Things Are", "A001", "9780060254926", "Illustré");
    album1.setAuteur("Maurice Sendak");
    album1.setEditeur("HarperCollins");
    album1.setPublicCible("00");
    album1.setEtat("libre");
    album1.setCode("1");




    // Affichage des informations de l'album
    cout << "\nInformations de l'album :" << endl;
    cout << "Titre: " << album1.getTitre() << endl;
    cout << "Auteur: " << album1.getAuteur() << endl;
    cout << "Editeur: " << album1.getEditeur() << endl;
    cout << "ISBN: " << album1.getISBN() << endl;
    cout << "Public Cible: " << album1.getPublicCible() << endl;
    cout << "Etat: " << album1.getEtat() << endl;
    cout << "Illustration: " << album1.getIllustration() << endl;


    // Copie de l'album1 pour créer un autre album
    Album album2(&album1, "Peintures");


    // Modification du nouvel album
    album2.setTitre("The Very Hungry Caterpillar");
    album2.setEditeur("Penguin Random House");
    album2.setEtat("libre");
    album2.setCode("1");




    // Affichage des informations du nouvel album
    cout << "\nInformations du nouvel album :" << endl;
    cout << "Titre: " << album2.getTitre() << endl;
    cout << "Auteur: " << album2.getAuteur() << endl;
    cout << "Editeur: " << album2.getEditeur() << endl;
    cout << "ISBN: " << album2.getISBN() << endl;
    cout << "Public Cible: " << album2.getPublicCible() << endl;
    cout << "Etat: " << album2.getEtat() << endl;
    cout << "Illustration: " << album2.getIllustration() << endl;
     // Création d'une bibliothèque
    Bibliotheque bibliotheque("Bibliotheque Centrale", "123 Rue des Livres", "BC123");


    // Ajout des livres à la bibliothèque
    bibliotheque.ajouterLivre(&livre1);
    bibliotheque.ajouterLivre(&livre2);


    // Affichage des livres dans la bibliothèque
    cout << "Livres dans la bibliothèque " << bibliotheque.getNom() << ":" << endl;
    bibliotheque.afficherLivres();


    // Suppression d'un livre par code
    bibliotheque.supprimerLivre("789012");


    // Affichage mis à jour des livres dans la bibliothèque
    cout << "\nLivres dans la bibliothèque après suppression :" << endl;
    bibliotheque.afficherLivres();


    // Création d'un livre pour la deuxième bibliothèque
    Livre livre4("Harry Potter à l'école des sorciers", "HP001", "9782070541271");
    livre4.setAuteur("J.K. Rowling");
    livre4.setEditeur("Gallimard Jeunesse");
    livre4.setPublicCible("00");
    livre4.setEtat("libre");
    livre4.setCode("1");


    // Création d'une deuxième bibliothèque
    Bibliotheque bibliotheque2("Bibliotheque Secondaire", "456 Rue des Livres", "BS456");


    // Achat d'un livre pour la deuxième bibliothèque
    bibliotheque2.acheterLivre(&livre4);


    // Affichage des livres dans la deuxième bibliothèque
    cout << "\nLivres dans la bibliothèque " << bibliotheque2.getNom() << ":" << endl;
    bibliotheque2.afficherLivres();


    // Demande d'un livre à une autre bibliothèque
    bibliotheque.demanderLivreAutreBib("9782070541271", bibliotheque2);


    // Affichage des livres dans la bibliothèque après demande
    cout << "\nLivres dans la bibliothèque " << bibliotheque.getNom() << " après demande :" << endl;
    bibliotheque.afficherLivres();
    Adherent adherent("Doe", "John", "123 Rue de l'Adherent", 25);


    // Affichage des informations de l'adhérent
    cout << "Informations de l'adhérent :" << endl;
    cout << "Nom: " << adherent.getNom() << endl;
    cout << "Prénom: " << adherent.getPrenom() << endl;
    cout << "Adresse: " << adherent.getAdresse() << endl;
    cout << " ge: " << adherent.getAge() << endl;
    cout << "Numéro d'adhérent: " << adherent.getNumeroAdherent() << endl;




    // Emprunt de livres
    adherent.emprunterLivre(&livre1);
    adherent.emprunterLivre(&livre2);





    // Restitution d'un livre
    adherent.rendreLivre("9780141185620");





    // Test de l'opérateur %
    cout << "\nTest de l'opérateur % (emprunté ou non) :" << endl;
    cout << "Le Petit Prince est-il emprunté? " << (adherent % "9782070105022" ? "Oui" : "Non") << endl;
    cout << "1984 est-il emprunté? " << (adherent % "9780451524935" ? "Oui" : "Non") << endl;
    cout << "Harry Potter est-il emprunté? " << (adherent % "9782070541271" ? "Oui" : "Non") << endl;


    return 0;
}
