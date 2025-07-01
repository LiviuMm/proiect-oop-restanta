#include "produs.h"

Produs::Produs( std::string cod, std::string nume, double pret, std::string exp_date, Magazin* magazin) : 
	m_cod(cod), m_nume(nume), m_pret(pret), m_exp_date(exp_date), magazin(magazin){}
