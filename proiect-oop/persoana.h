#pragma once

#include <string>

class Persoana {
private:
	std::string m_nume;
	std::string m_cnp;
	int m_varsta;
public:
	Persoana(std::string nume, std::string cnp, int varsta);


};

//class Magazin {
//private:
//	std::vector<Angajat*> m_angajati;
//public:
//	void CevaFunctie() {
//		for (auto& angajat : m_angajati) {
//			angajat.
//		}
//	}
//};
