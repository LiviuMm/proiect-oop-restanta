#pragma once
#include <string>
#include <vector>
#include "angajat.h"
#include "administrator.h"
#include "produs.h"

class Magazin {
private:
    std::string m_nume;
    std::vector<Angajat*> m_angajati; 
    std::vector<Produs*> m_produs;
    Administrator* m_administrator;
public:
    Magazin(std::string nume, Administrator* administrator);

    void AdaugaAngajat(Angajat* a);
    void AdaugaProdus(Produs* p);


};