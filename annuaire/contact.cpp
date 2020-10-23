#include "contact.h"
#include<iostream>

using namespace std;

contact::contact()
{
}

contact::contact(string civilite, string nom, string prenom, string adressp, int numero, string email)
{
	this-> Civilite = civilite;
	this -> Nom = nom;
	this-> Prenom = prenom;
	this-> AdressP = adressp;
	this->Numero = numero;
	this->Email = email;

}

contact::~contact()
{
}

string contact::getCivilite()
{
	return Civilite;
}

string contact::getNom()
{
	return Nom;
}

string contact::getPrenom()
{
	return Prenom;
}

string contact::getAdressP()
{
	return AdressP;
}

int contact::getNumero()
{
	return Numero;
}

string contact::getEmail()
{
	return Email;
}

void contact::setCivilite(string civilite_A)
{
	Civilite = civilite_A;
}

void contact::setNom(string nom_A)
{
	Nom = nom_A;
}

void contact::setPrenom(string prenom_A)
{
	Prenom = prenom_A;
}

void contact::setAdressP(string adressP_A)
{
	AdressP = adressP_A;
}

void contact::setNumero(int numero_A)
{
	Numero = numero_A;
}

void contact::setEmail(string email_A)
{
	Email = email_A;
}

void contact::affiche()
{

}
