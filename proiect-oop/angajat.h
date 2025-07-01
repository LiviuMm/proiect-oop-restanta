#pragma once

#include "persoana.h"
#include <string>

class Angajat : public Persoana
{private:
	int m_ore;
	int m_salariu;
public:
	Angajat(std::string nume,std::string cnp, int varsta, int salariu, int ore);

};
