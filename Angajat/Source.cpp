#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	
	CEO	Eduard("Eduard " , "Manager " , "Mecatronica ", 15000);
	sefDepartament Robert ("Robert ", "Manager ", "Mecatronica ", 10000);
	teamLeader Iulian ("Iulian ", "Manager ", "Mecatronica ", 7000);
	Muncitor Sebastian ("Sebastian ", "Muncitor ", "Mecatronica", 1000);
	Muncitor Paul ("Paul ", "Muncitor ","Mecatronica ",3000);

	Eduard.Afisare();
	Robert.Afisare();
	Iulian.Afisare();
	Sebastian.Afisare();
	Paul.Afisare();

	return 0;
}