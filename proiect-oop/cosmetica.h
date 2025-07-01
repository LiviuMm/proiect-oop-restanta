#pragma once

#include <string>
#include "magazin.h"

class Cosmetica : public Magazin {
public:
	Cosmetica(std::string nume, Administrator* administrator);
};
