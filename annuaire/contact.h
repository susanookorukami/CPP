#pragma once
#include<iostream>

using namespace std;
class contact
{
private:
	string Civilite;
	string Nom;
	string Prenom;
	string AdressP;
	int Numero;
	string Email; 
public:
	//constructeur
	contact();
	contact(string Civilite, string Nom,string Prenom, string AdressP, int Numero,string Email);
	//destructeur
	~contact();
	
	//getter
	string getCivilite();
	string getNom();
	string getPrenom();
	string getAdressP();
	int getNumero();
	string getEmail();

	//setter
	void setCivilite(string civilite);
	void setNom(string nom);
	void setPrenom(string prenom);
	void setAdressP(string adressp);
	void setNumero(int numero);
	void setEmail(string email);

	void affiche();


};

