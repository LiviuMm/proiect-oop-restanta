#pragma once
#include <string>
#include <vector>
#include "magazin.h"
#include "angajat.h"

class Mall {
private:
	std::string m_nume;
	std::string m_locatie;
	std::vector<Magazin*> m_magazine;
	std::vector<Angajat*> m_angajati;
public:
	Mall(std::string nume, std::string locatie);

	void AdaugaAngajati(Angajat* a);
	void AdaugaMagazine(Magazin* m);

	int NumarMagazine();

	int NumarAngajati();

	double InventarMall();

	

};