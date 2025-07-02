#pragma once

#include <string>
#include "magazin.h"
#include "administrator.h"

class Fast_food: public Magazin {
public:
	Fast_food(std::string nume, Administrator* administrator);

};