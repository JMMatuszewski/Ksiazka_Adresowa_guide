#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    //vector <Adresat> adresaci;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    //string daneOstaniegoAdresataWPliku;
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) :  NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector<Adresat> *adresaci,int idUzytkownika);
    //void dodajAdresata(vector<Adresat> adresaci, int idUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif
