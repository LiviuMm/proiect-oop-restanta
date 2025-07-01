# pragma once

# include "angajat.h"
# include "magazin.h"
# include "zona.h"

class Agent_curatenie: public Angajat {
private:
	Zona* m_zona;
	Magazin* m_magazin;
public:
	Agent_curatenie(std::string nume, std::string cnp, int varsta, int salariu, int ore, Zona* zona = nullptr, Magazin* magazin = nullptr);

};

