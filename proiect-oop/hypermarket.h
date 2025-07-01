#pragma once

#include <string>
#include "magazin.h"

class Hypermarket : public Magazin {
public:
	Hypermarket(std::string nume, Administrator* administrator);

};