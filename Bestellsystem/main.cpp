#include "Bestellung.h"
#include "Katalog.h"
#include "Bestellsystem.h"
#include <memory>
#include <iostream>
#include <fstream>
using namespace std;

void Katalogverwaltung(Katalog* katalog) {
	bool running = true;
	int Eingabe, Eingabe2;
	string Input;
	while (running) {
		cout << "(0) Katalog anzeigen" << endl;
		cout << "(1) Objekt zum Katalog hinzuf\x81gen" << endl;
		cout << "(2) Objekt aus dem Katalog l\x84schen" << endl;
		cout << "(3) Zur\x81 \bck zum Hauptmen\x81" << endl;
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
int BestellSystemVerwaltung(Bestellsystem* bestellsystem) {
	bool running = true;
	int CurrentOrder;
	int Eingabe, Eingabe2;
	string Input1, Input2;

	while (running) {
		cout << "(0) Aktuelle Bestellungen Anzeigen" << endl;
		cout << "(1) Bestellung hinzuf\x81gen" << endl;
		cout << "(2) Bestellung l\x94schen" << endl;
		cout << "(3) Bestellung zum Verwalten ausw\x84hlen" << endl;
		cout << "(4) Zum Hauptmen\x81 zur\x81 \bckkehren" << endl;
		cin >> Eingabe;
		switch (Eingabe) {
		case 0:
			bestellsystem->printBestellungen();
			break;
		case 1:
			cout << "Geben Sie den Vornamen des Kunden ein: ";
			cin >> Input1;
			cout << endl << "Geben Sie den Nachnamen des Kunden ein: ";
			cin >> Input2;
			cout << endl;
			bestellsystem->addBestellung(Input1, Input2);
			break;

		case 2:
			cout << "Geben Sie die ID des Kunden ein dessen Bestellung gel\x94scht werden soll: ";
			cin >> Eingabe;
			bestellsystem->delBestellung(Eingabe);
			break;

		case 3:
			cout << "Geben Sie die ID der gew\x81nschten Bestellung an: ";
			cin >> Eingabe;
			if(bestellsystem->checkOrder(Eingabe))CurrentOrder = Eingabe;
			break;
		case 4:
			running = false;
			break;

		}
	
	
	
	}
	return 0;

}
void Bestellverwaltung(Bestellsystem* bestellsystem, int CurrentOrder, Katalog* katalog){
	int Eingabe, Eingabe1;
	bool running = true;
	string Input;


	while (running) {
		cout << "(0) Bestellung anzeigen" << endl;
		cout << "(1) Produkt hinzuf\x81gen" << endl;
		cout << "(2) Produkt entfernen" << endl;
		cout << "(3) Zur\x81 \bck zum Hauptmen\x81" << endl;
		cin >> Eingabe;

		switch (Eingabe) {
		case 0:
			bestellsystem->getBestellung(CurrentOrder)->printBestellung();
			break;

		case 1:
			cout << "Geben Sie die ID des hinzuzuf\x81genden Objekts an: ";
			cin >> Eingabe1;
			bestellsystem->getBestellung(CurrentOrder)->addProdukt(katalog->getProdukt(Eingabe1));
			break;
		case 2:
			cout << "Geben sie die ID des zu l\x94schenden Objekts ein: ";
			cin >> Eingabe1;
			cout << endl;
			bestellsystem->getBestellung(CurrentOrder)->delProdukt(Eingabe1);
			break;
		case 3:
			running = false;
			break;


		}

	}














}
int main() {
	Bestellsystem bestellsystem1 = Bestellsystem();
	Katalog katalog1 = Katalog();
	bool running = true;
	int Eingabe;
	int CurrentOrder = 0;

	cout << "Wilkommen im Bestellsystem v1!" << endl;
	while (running) {
		cout << "(0) Katalog verwalten" << endl;
		cout << "(1) Bestellungen verwalten" << endl;
		cout << "(2) Aktuelle Bestellung bearbeiten" << endl;
		cout << "(3) Programm beenden" << endl;
		cin >> Eingabe;
		switch (Eingabe) {
		case 0:
			Katalogverwaltung(&katalog1);
			break;

		case 1:
			CurrentOrder = BestellSystemVerwaltung(&bestellsystem1);
			break;

		case 2:
			Bestellverwaltung(&bestellsystem1,CurrentOrder,&katalog1);
			break;
		case 3:
			running = false;
			break;

		}
	}
}