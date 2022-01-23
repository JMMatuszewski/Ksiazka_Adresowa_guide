#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

//#include "UzytkownikMenedzer.h"
//#include "Uzytkownik.h"

using namespace std;

class AdresaciMenedzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
/////////////// MENU //////////////////
    //char wybierzOpcjeZMenuUzytkownika();
///////////////////////////////////////
    int idOstatniegoAdresata;
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idUzytkownika);//, int idOstatniegoAdresata

public:
    AdresaciMenedzer(string NAZWAPLIKUZADRESATAMI)
    : plikZAdresatami(NAZWAPLIKUZADRESATAMI){}

    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata(int idUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);
};

#endif
