#pragma once

#include <string>
#include "magazin.h"

class Electronic : public Magazin {
public:
	Electronic(std::string nume, Administrator* administrator);

};