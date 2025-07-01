#include "angajat.h"

Angajat::Angajat(std::string nume, std::string cnp, int varsta, int salariu, int ore):
	Persoana(nume, cnp, varsta), m_salariu(salariu), m_ore(ore){}