#ifndef BESTELLUNG_CPP
#define BESTELLUNG_CPP


#include "Bestellung.h"
#include <vector>
using namespace std;

Bestellung::Bestellung()
{
}

Bestellung::Bestellung(Kunde k)
{
	kunde = k;
	vec = {};
}

Kunde Bestellung::getKunde()
{
	return kunde;
}

void Bestellung::addProdukt(Produkt* newprod)
{
	vec.push_back(newprod);
}

Produkt* Bestellung::getProdukt(int a)
{
	if (vec.size() < a) { return nullptr; }
	else return* vec.begin() + a;
}

Bestellung::~Bestellung()
{
}
#endif // !BESTELLUNG_CPP