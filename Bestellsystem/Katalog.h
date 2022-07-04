#ifndef KATALOG_H
#define KATALOG_H
#include "Produkt.h"
#include <memory>
#include <vector>
using namespace std;
class Katalog : public Produkt{
private:
	vector<Produkt> m_Produkte;

public:
	Katalog();
	Produkt* getProdukt(int IDIn);
	void printKatalog();
	void addProdukt(string name);
	void delProdukt(int IDIn);
	~Katalog();




};
#endif // KATALOG_H