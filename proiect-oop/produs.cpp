#include "produs.h"
#include <iostream>

Produs::Produs( std::string cod, std::string nume, double pret, std::string exp_date, Magazin* magazin) : 
	m_cod(cod), m_nume(nume), m_pret(pret), m_exp_date(exp_date), magazin(magazin){}

double Produs::GetPret() const {
	return m_pret;
}

void Produs::Afiseaza() const {
	std::cout << "Produs: " << m_nume << ", Cod: " << m_cod << ", Pret: " << m_pret << ", Expira: " << m_exp_date << std::endl;
}