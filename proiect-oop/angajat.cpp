#include "angajat.h"
#include <iostream>
#include <string>

Angajat::Angajat(std::string nume, std::string cnp, int varsta, int salariu, int ore):
	Persoana(nume, cnp, varsta), m_salariu(salariu), m_ore(ore){}

void Angajat::Afiseaza() const {
	std::cout <<"Numele" <<GetNume() << "salariu: " << m_salariu << "lei, ore de munca : " << m_ore<< std::endl;
}