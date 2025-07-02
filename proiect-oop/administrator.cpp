#include "administrator.h"
#include <iostream>
#include "angajat.h"
#include "afisare.h"



Administrator::Administrator(std::string nume, std::string cnp, int varsta, int salariu, int ore) :
    Angajat(nume, cnp, varsta, salariu, ore) {}

void Administrator::AdaugaMagazin(Magazin* m) {
    m_magazine.push_back(m);
}

void Administrator::Afiseaza() const {std::cout << "Administrator: " << GetNume() << ", administreaza " << m_magazine.size() << " magazine.\n";}

