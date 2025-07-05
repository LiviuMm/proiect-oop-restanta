#pragma once

#include <string>
#include "magazin.h"
#include "administrator.h"

class Cosmetica : public Magazin {
public:
	Cosmetica(std::string nume, Administrator* administrator);
};
	