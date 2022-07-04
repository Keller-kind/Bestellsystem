#pragma once
#ifndef PRODUKT_H
#define PRODUKt_H
#include <string>
using namespace std;

class Produkt{
private:
	int ID;
	string name;

public:
	Produkt();
	Produkt(int IDIn, string nameIn);
	int getID();
	string getProduktName();
	~Produkt();
};

#endif // !PRODUKT_H