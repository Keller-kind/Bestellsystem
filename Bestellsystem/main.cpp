#include "Bestellung.h"
#include "Katalog.h"
#include "Bestellsystem.h"
#include <memory>
#include <iostream>
using namespace std;

void Katalogverwaltung(Katalog* katalog) {
	bool running = true;
	int Eingabe, Eingabe2;
	string Input;
	while (running) {
		cout << "(0) Katalog anzeigen" << endl;
		cout << "(1) Objekt zum Katalog hinzufügen" << endl;
		cout << "(2) Objekt aus dem Katalog löschen" << endl;
		cout << "(3) Zurück zum Hauptmenue" << endl;
		cin >> Eingabe;
		switch (Eingabe) {
		case 0:
			katalog->printKatalog();
			break;

		case 1:
			cout << "Name: ";
			cin >> Input;
			katalog->addProdukt(Input);
			break;

		case 2:
			cout << "ID: ";
			cin >> Eingabe2;
			katalog->delProdukt(Eingabe2);
			break;

		case 3:
			running = false;
			cout << "Returning to main menu..." << endl;
			break;
		}
	}


}
void Bestellverwaltung(Bestellsystem* bestellsystem) {


}
int main() {
	Katalog katalog1 = Katalog();
	Bestellung bestellung1=Bestellung(Kunde("Leopold","Keller",1));
	bestellung1.addProdukt(katalog1.getProdukt(0));
	cout << bestellung1.getProdukt(0)->getProduktName();
	katalog1.printKatalog();
	bool running = true;
	int Eingabe;


	cout << "Wilkommen im Bestellsystem v1!" << endl;
	while (running) {
		cout << "(0) Katalog verwalten" << endl;
		cout << "(1) Bestellungen verwalten" << endl;
		cout << "(2) Neue Bestellung aufgeben" << endl;
		cout << "(3) Programm beenden" << endl;
		cin >> Eingabe;
		switch (Eingabe) {
		case 0:
			Katalogverwaltung(&katalog1);
			break;

		case 1:

			break;

		case 3:
			running = false;
			break;

		}











	}






}