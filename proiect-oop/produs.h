#pragma once

#include <string>
#include "afisare.h"


class Magazin;

class Produs:public Afisare {
private:
	std::string m_cod;
	std::string m_nume;
	double m_pret;
	std::string m_exp_date;
	Magazin* magazin;
public:
	Produs(std::string cod, std::string nume, double pret, std::string exp_date, Magazin* magazin);
	double GetPret() const;

	void Afiseaza() const override;
};