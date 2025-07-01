#pragma once

#include <string>
#include "magazin.h"

class Fast_food: public Magazin {
public:
	Fast_food(std::string nume, Administrator* administrator);

};