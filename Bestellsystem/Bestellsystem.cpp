#include "Bestellsystem.h"
#include <iostream>
#include <fstream>
using namespace std;

Bestellsystem::Bestellsystem()
{
}

void Bestellsystem::addBestellung(string vornameIn, string nachnameIn)
{
    static int count = 0;
    ofstream file;
    ifstream filein;
    file.open("Bestellungen.txt");
    filein.open("Bestellungen.txt");

	
	m_Bestellungen.push_back(new Bestellung(Kunde(vornameIn, nachnameIn, count++)));
    file << vornameIn << endl << nachnameIn << endl;
}

void Bestellsystem::delBestellung(int IDIn)
{
    for (int i = 0; i < m_Bestellungen.size();i++) {
        if (m_Bestellungen[i]->getKunde().getCustomerID() == IDIn) {
            delete m_Bestellungen[i];
            return;
        }
       }
    cout << "Bestellung existiert nicht!" << endl;
}

Bestellung* Bestellsystem::getBestellung(int IDIn)
{
    for (auto i : m_Bestellungen) {
        if (i->getCustomerID() == IDIn) return i;
    }
    return nullptr;
}

bool Bestellsystem::checkOrder(int IDIn)
{
    for (auto i : m_Bestellungen) {
        if (i->getCustomerID() == IDIn) { return true; }
    }
    return false;
}

void Bestellsystem::printBestellungen()
{
    for (auto i : m_Bestellungen) {
        cout << i->getKunde().getCustomerID() << " " << i->getKunde().getVorname() << "  " << i->getKunde().getNachname() << endl;
    }
}

Bestellsystem::~Bestellsystem()
{
}
