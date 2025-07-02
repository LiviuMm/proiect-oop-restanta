#pragma once

#include <string>
#include <iostream>
class Persoana {
private:
	std::string m_nume;
	std::string m_cnp;
	int m_varsta;
public:
	Persoana(std::string nume, std::string cnp, int varsta);

	std::string GetNume() const {
		return m_nume;
	}

	int GetVarsta() const {
		return m_varsta; 
	}
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
