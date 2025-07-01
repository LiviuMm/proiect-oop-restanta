#pragma once

#include <iostream>
#include "persoana.h"

class Client: public Persoana {

public:
	Client(std::string nume, std::string cnp, int varsta);
};