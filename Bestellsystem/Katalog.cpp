#ifndef KATALOG_CPP
#define KATALOG_CPP
#include "Katalog.h"
#include <iostream>
#include <vector>
using namespace std;
Katalog::Katalog()
{

    m_Produkte.push_back(Produkt(0,"Muetze"));
    m_Produkte.push_back(Produkt(1,"Hose"));
    m_Produkte.push_back(Produkt(2,"Schuhe"));
    m_Produkte.push_back(Produkt(3,"Socken"));
}

Produkt* Katalog::getProdukt(int IDIn)
{
    for (auto i : m_Produkte) {
        if (i.getID() == IDIn) {
            Produkt* a = &m_Produkte.at(IDIn);
            return a;
        }
    }
    return nullptr;
}

void Katalog::printKatalog()
{
    for (auto i : m_Produkte) {
        cout << i.getID() << "  " << i.getProduktName() << endl;
    }
}

void Katalog::addProdukt(string name)
{
    static int counter = 3;
    m_Produkte.push_back(Produkt(counter++, name));

}

void Katalog::delProdukt(int IDIn)
{
    for (auto it = m_Produkte.begin(); it != m_Produkte.end();) {

        if (it->getID() == IDIn) {
            it = m_Produkte.erase(it);
            return;
        }
        else it++;
    }
    cout << "Produkt existiert nicht!" << endl;
}

Katalog::~Katalog()
{
}
#endif // !KATALOG_CPP