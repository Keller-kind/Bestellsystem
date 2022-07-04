/**
 * @author      : Leopold Keller (leopold.keller@stud.h-da.de)
 * @created     : 14/06/2022
 * @filename    : Kunde
 */

#ifndef KUNDE_H
#define KUNDE_H
#include <string>
using namespace std;
class Kunde {
private:
    string vorname;
    string nachname;
    int ID;

public:
    Kunde();
    Kunde(string vornameIn, string nachnameIn, int IDIn);
    string getVorname();
    string getNachname();
    int getID();
    void setVorname(string vornameIn);
    void setNachname(string nachnameIn);
    void setID(int iDIn);
    ~Kunde();


};
#endif