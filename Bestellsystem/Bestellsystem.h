#pragma once
#include "Bestellung.h"
#include <vector>

class Bestellsystem : public Bestellung{
private:
	vector<Bestellung*> m_Bestellungen;

public:
	Bestellsystem();
	void addBestellung(string vornameIn, string nachnameIn);
	void delBestellung(Kunde k);
	~Bestellsystem();





};