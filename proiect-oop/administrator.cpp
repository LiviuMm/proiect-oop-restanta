#include "administrator.h"

Administrator::Administrator(std::string nume, std::string cnp, int varsta, int salariu, int ore) :
    Angajat(nume, cnp, varsta, salariu, ore) {}

void Administrator::AdaugaMagazin(Magazin* m) {
    m_magazine.push_back(m);
}


