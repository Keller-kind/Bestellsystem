#ifndef PRODUKT_CPP
#define PRODUKT_CPP
#include "Produkt.h"
#include <iostream>
Produkt::Produkt()
{
	ID = 0;
}

Produkt::Produkt(int IDIn, string nameIn): ID(IDIn), name(nameIn)
{

}

int Produkt::getID()
{
	return ID;
}

void Produkt::printProdukt()
{
	std::cout << ID << " " << name;
}

string Produkt::getProduktName()
{
	return name;
}

Produkt::~Produkt()
{
}
#endif // !PRODUKT_CPP