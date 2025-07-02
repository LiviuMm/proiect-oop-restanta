#pragma once

#include <string>
#include "magazin.h"
#include "administrator.h"

class Imbracaminte : public Magazin {
public:
	Imbracaminte(std::string nume, Administrator* administrator);

};