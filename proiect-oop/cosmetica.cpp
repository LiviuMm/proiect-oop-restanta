#include "cosmetica.h"
#include <iostream>

Cosmetica::Cosmetica(std::string nume, Administrator* administrator)
	: Magazin(nume, administrator) {
}
double Cosmetica::InventarMagazin() const  {
	double InventarInitial = Magazin::InventarMagazin();
	double pagube = 100.0;
	double InventarFinal = InventarInitial - pagube;
	return InventarFinal;
}


