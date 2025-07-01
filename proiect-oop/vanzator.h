#pragma once

#include"angajat.h"
#include"magazin.h"
#include <string>

class Vanzator : public Angajat {
private:
	Magazin* magazin;

public:
	Vanzator(std::string nume, std::string cnp, int varsta,int salariu, int ore, Magazin* magazin);
};