#include "Bestellsystem.h"
#include <iostream>
using namespace std;

Bestellsystem::Bestellsystem()
{
}

void Bestellsystem::addBestellung(string vornameIn, string nachnameIn)
{
	static int count=0;
	m_Bestellungen.push_back(new Bestellung(Kunde(vornameIn, nachnameIn, count++)));
}

void Bestellsystem::delBestellung(Kunde k)
{
    for (int i = 0; i < m_Bestellungen.size();i++) {
        if (m_Bestellungen[i]->getKunde().getID() == k.getID())
            delete m_Bestellungen[i];
    }
    cout << "Produkt existiert nicht!" << endl;
}

Bestellsystem::~Bestellsystem()
{
}
