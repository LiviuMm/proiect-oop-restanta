#pragma once

#include <iostream>
#include "persoana.h"
#include "afisare.h"
class Client: public Persoana, public Afisare {

public:
	Client(std::string nume, std::string cnp, int varsta);

	void Afiseaza() const override;
};