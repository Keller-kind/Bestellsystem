#ifndef KUNDE_CPP
#define KUNDE_CPP
#include "Kunde.h"

Kunde::Kunde()
{
}

Kunde::Kunde(string vornameIn, string nachnameIn, int IDIn): vorname(vornameIn), nachname(nachnameIn), ID(IDIn)
{
}

string Kunde::getVorname()
{
	return vorname;
}

string Kunde::getNachname()
{
	return nachname;
}

int Kunde::getCustomerID()
{
	return ID;
}

void Kunde::setVorname(string vornameIn)
{
	vorname = vornameIn;
}

void Kunde::setNachname(string nachnameIn)
{
	nachname = nachnameIn;
}

void Kunde::setID(int iDIn)
{
	ID = iDIn;

}

Kunde::~Kunde()
{
}
#endif // !KUNDE_CPP