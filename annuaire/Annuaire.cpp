#include<iostream>
#include<fstream>
#include "contact.h"

using namespace std;


int main() 
{
	ofstream myfile("annuaire.txt") ;
	if (myfile.is_open()) {
		myfile << "higael\n";
		myfile << "07 45 69 96 19";
		myfile.close();
	}
	else cout << "file not found";
	return 0;
}

