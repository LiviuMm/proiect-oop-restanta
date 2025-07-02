#pragma once

#include <string>
#include "magazin.h"
#include "administrator.h"

class Hypermarket : public Magazin {
public:
	Hypermarket(std::string nume, Administrator* administrator);

};