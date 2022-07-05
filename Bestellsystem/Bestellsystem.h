#pragma once
#include "Bestellung.h"
#include <vector>

class Bestellsystem : public Bestellung{
private:
	vector<Bestellung*> m_Bestellungen;
	vector<Kunde*> m_Kunden;

public:
	Bestellsystem();
	void addBestellung(string vornameIn, string nachnameIn);
	void delBestellung(int IDIn);
	Bestellung* getBestellung(int IDIn);
	bool checkOrder(int IDIn);
	void printBestellungen();
	~Bestellsystem();





};