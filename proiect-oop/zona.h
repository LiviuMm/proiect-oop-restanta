#pragma once
# include <string>
# include <vector>
# include "angajat.h"

class Zona {
private:
	int id;
	std::vector<Angajat*> m_angajati;
public:
	Zona(int id);

	void AdaugaAngajat(Angajat* a);
};