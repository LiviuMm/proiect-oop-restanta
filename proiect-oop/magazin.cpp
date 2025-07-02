#include "magazin.h"
#include <iostream>
#include "produs.h"

Magazin::Magazin(std::string nume, Administrator* administrator):
	m_nume(nume), m_administrator(administrator){}

void Magazin::AdaugaAngajat(Angajat* a) {
	m_angajati.push_back(a);
}
void Magazin::AdaugaProdus(Produs* p) {
	m_produs.push_back(p);
}

double Magazin::InventarMagazin() const {
	 double i = 0;
	for (Produs* p : m_produs)
		i = i + p->GetPret();
	return i;
}

void Magazin::Afiseaza() const {
	std::cout << "Magazin: " << m_nume << ", Nr. angajati: " << m_angajati.size()<< ", Inventar: " << InventarMagazin() << " lei" << std::endl;
}