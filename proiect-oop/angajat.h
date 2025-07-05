#pragma once

#include "persoana.h"
#include <string>
#include "afisare.h"

class Angajat : public Persoana, public Afisare
{private:
	int m_ore;
	int m_salariu;
public:
	Angajat(std::string nume,std::string cnp, int varsta, int salariu, int ore);

	void Afiseaza() const override;

};
