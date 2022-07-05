#ifndef BESTELLUNG_CPP
#define BESTELLUNG_CPP


#include "Bestellung.h"
#include <vector>
#include <iostream>
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

void Bestellung::addProdukt(Produkt* produkt)
{
	vec.push_back(produkt);
}

void Bestellung::delProdukt(int IDIn)
{
	for (int i = 0; i < vec.size();i++) {

		if (vec[i]->getID() == IDIn) {
			 vec.erase(vec.begin()+i);
			return;
		}
	}
	cout << "Produkt existiert nicht!" << endl;
}


void Bestellung::printBestellung()
{
	cout << "Index	ProdID	Name" << endl;
	for (auto i : vec) {
		i->printProdukt();
		cout << endl;
	}
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