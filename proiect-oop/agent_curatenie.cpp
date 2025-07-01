#include "agent_curatenie.h"

Agent_curatenie::Agent_curatenie(std::string nume, std::string cnp, int varsta, int salariu, int ore, Zona* zona, Magazin* magazin)
    : Angajat(nume, cnp, varsta, salariu, ore), m_zona(zona), m_magazin(magazin) {}
