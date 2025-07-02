#include "vanzator.h"
#include <iostream>

Vanzator::Vanzator(std::string nume, std::string cnp, int varsta, int salariu, int ore, Magazin* magazin): 
	Angajat(nume, cnp, varsta, salariu, ore), magazin(magazin) {}
