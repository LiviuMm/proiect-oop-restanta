#include "client.h"

Client::Client(std::string nume, std::string cnp, int varsta): 
	Persoana(nume, cnp, varsta) {}

void Client::Afiseaza() const {
	std::cout << "Client: " << GetNume() << ", varsta: " << GetVarsta() << '\n';
}
