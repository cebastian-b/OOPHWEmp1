#pragma warning(disable:4996)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Una dintre idei a fost : Sa incerc sa fac o functie pur virtuala astfel incat sa pot adauga la fiecare dintre Muncitor, Manager, CEO etc. o functie Subodonat
// A doua idee a fost sa imi creez separat functii pentru Subordonat
// A treia idee a fost sa imi mai adaug un parametru la protected : LAngSub(Lista angajati subordonati) si sa ii adaug la fiecare daca accepta subordonati sau nu
// si daca da cine sunt aceeia
//Programul intampina probleme la initializarea cu tipul char* (se pot observa in README.md), 
//prima incercare a fost cu tipul string (#include <string>) care a compilat cum trebuie

class Angajat {
protected:

	char* Functie;
	char* Departament;
	char* Nume;
	double Salariu;

public:
	void setName(char* nume) {
		this->Nume = nume;
	}
	char* getNume() {
		return Nume;
	}
	void setDepartament(char* departament) {
		this->Departament = departament;
	}
	char* getDepartament() {
		return Nume;
	}
	void setFunctie(char* functie) {
		this->Functie = functie;
	}
	char* getFunctie() {
		return Functie;
	}
	void setSalariu(double salariu) {
		this->Salariu = salariu;
	}
	double getSalariu() {
		return Salariu;
	}


	Angajat(char* nume, char* functie, char* departament, double salariu) {
		this->Nume = new char[strlen(nume) + 1];
		strcpy(this->Nume, nume);
		this->Functie = new char[strlen(functie) + 1];
		strcpy(this->Nume, nume);
		this->Departament = new char[strlen(departament) + 1];
		strcpy(this->Departament, departament);
		
	}
	Angajat();
	

	/*virtual void Subordonati() const = 0;*/ ///<----------------------- 

	

};


class Muncitor :  public Angajat{
public:
	Muncitor(char* nume, char* functie, char* departament, double salariu) :Angajat(nume, functie, departament, salariu) {
		this->Nume = new char[strlen(nume) + 1];
		strcpy(this->Nume, nume);
		this->Functie = new char[strlen(functie) + 1];
		strcpy(this->Nume, nume);
		this->Departament = new char[strlen(departament) + 1];
		strcpy(this->Departament, departament);
		this->Salariu = salariu;
	}
	Muncitor();
	void Afisare() {
		cout << Nume << " " << Functie << " " << Departament << " " << Salariu << endl;
	}

	/*void Subordonati() {
		cout << "Muncitorul nu are subodonati";
	}*/

};

class Manager : public Angajat {
public:
	Manager(char* nume, char* functie, char* departament, double salariu):Angajat(nume, functie, departament, salariu) {
	}
	Manager();
	void Afisare() {
		cout << Nume << " " << Functie << " " << Departament << " " << Salariu << endl;
	}
	/*const void Subodonati() {
		cout << "Subordonatii CEO-ului sunt:";

	}*/
};

class CEO : public Manager {
public:
	CEO(char* nume,  char* functie, char* departament, double salariu):Manager(nume,functie,departament,salariu) {
	}
	CEO();
	void Afisare() {
		cout << Nume << " " << Functie << " " << Departament << " " << Salariu << endl;
	}
	/* void Subodonati () {
		cout << "Subordonatii CEO-ului sunt:";

	}*/

};

class sefDepartament : public Manager {
public:
	sefDepartament(char* nume,  char* functie, char* departament, double salariu):Manager(nume, functie, departament, salariu){
	}
	sefDepartament();
	void Afisare() {
		cout << Nume << " " << Functie << " " << Departament << " " << Salariu << endl;
	}
	/*void Subodonati() {
		cout << "Subordonatii CEO-ului sunt:";

	}*/
};

class teamLeader :public Manager {
public:
	teamLeader(char* nume,  char* functie, char* departament, double salariu):Manager(nume, functie, departament, salariu) {
	}
	teamLeader();
	 void Afisare() {
		cout << Nume << " " << Functie << " " << Departament << " " << Salariu << endl;
	}
	/* const void Subodonati() {
		cout << "Subordonatii CEO-ului sunt:";

	}*/
};

