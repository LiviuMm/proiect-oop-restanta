#include "zona.h"

Zona::Zona(int id): id(id) {}

void Zona::AdaugaAngajat(Angajat* a) {
	m_angajati.push_back(a);
}
