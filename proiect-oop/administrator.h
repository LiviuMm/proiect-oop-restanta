#pragma once
#include "persoana.h"
#include <string>
#include <vector>
#include "afisare.h"

class Magazin;

class Administrator : public Angajat {
private:
	std::vector<Magazin*> m_magazine;
public:
	Administrator(std::string nume, std::string cnp, int varsta, int salariu, int ore);

	void AdaugaMagazin(Magazin* m);

	void Afiseaza() const override;

};