/********************************************
* Titre: Travail pratique #2 - Produit.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothee CHAUVIN
*******************************************/

#include "Produit.h"

Produit::Produit(const string& nom, int reference, double prix) :
	nom_{ nom },
	reference_{ reference },
	prix_{ prix }
{ }

// Methodes d'acces
string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}


// Methodes de modification
void Produit::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}
//Methodes d'affichage et de modifaction
ostream& operator<<(ostream& o, Produit& p)
{
	return o << "nom : " << p.obtenirNom() << "\t ref : " << p.obtenirReference()<< "\t prix : " << p.obtenirPrix();
}
//Methode de comparaison

bool operator==(const Produit& p1,const Produit& p2) 
{
	return (p1 == p2);
}

bool Produit::operator>(const Produit& p1)
{
	return (prix_ > p1.obtenirPrix());
}

bool Produit::operator<(const Produit& p1)
{
	return (prix_ < p1.obtenirPrix());
}

 istream& operator>>(istream& i, Produit& p) 
{
	 return i >> p.nom_ >> p.reference_>>p.prix_;

}
