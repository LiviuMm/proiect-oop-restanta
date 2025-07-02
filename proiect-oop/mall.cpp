#include "mall.h"


	Mall::Mall(std::string nume, std::string locatie) :
		m_nume(nume), m_locatie(locatie){}

	void Mall::AdaugaAngajati(Angajat* a) {
		m_angajati.push_back(a);
	}
	void Mall::AdaugaMagazine(Magazin* m) {
		m_magazine.push_back(m);
	}

	int Mall::NumarMagazine() {
		return static_cast<int>(m_magazine.size());
	}

	double Mall :: InventarMall() {
		double i = 0;	
		for (Magazin* m : m_magazine) {
			i = i + m->InventarMagazin();
		}
		return i;

	}





