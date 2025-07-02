#pragma once
class Afisare {
public:
	virtual void Afiseaza() const = 0; //functie pur virtuala pentru afisare
	virtual ~Afisare() = default;
};