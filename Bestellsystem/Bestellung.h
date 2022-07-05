#ifndef BESTELLUNG_H
#define BESTELLUNG_H
#include "Kunde.h"
#include "Produkt.h"
#include <vector>
#include <memory>
using namespace std;
class Bestellung : public Kunde,public Produkt {
private:
	Kunde kunde;
	vector<Produkt*> vec;
	
public:
	Bestellung();
	Bestellung(Kunde k);
	Kunde getKunde();
	void addProdukt(Produkt* produkt);
	void delProdukt(int IDIn);
	void printBestellung();
	Produkt* getProdukt(int a);
	~Bestellung();
};
#endif // !BESTELLUNG_H