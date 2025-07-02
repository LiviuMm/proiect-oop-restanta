#pragma once
#include <string>
#include <vector>
#include "angajat.h"
#include "afisare.h"

class Administrator;
class Produs;

class Magazin: public Afisare {
private:
    std::string m_nume;
    std::vector<Angajat*> m_angajati; 
    std::vector<Produs*> m_produs;
    Administrator* m_administrator;
public:
    Magazin(std::string nume, Administrator* administrator);

    void AdaugaAngajat(Angajat* a);
    void AdaugaProdus(Produs* p);

    virtual double InventarMagazin() const;

    virtual void Afiseaza() const override;
};