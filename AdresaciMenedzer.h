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
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
/////////////// MENU //////////////////
    //char wybierzOpcjeZMenuUzytkownika();
///////////////////////////////////////
    //int idOstatniegoAdresata;
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();//, int idOstatniegoAdresata // Adresat

public:
    AdresaciMenedzer(string NAZWAPLIKUZADRESATAMI, int idZalogowanegoUzytkownika)
    : plikZAdresatami(NAZWAPLIKUZADRESATAMI), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();//int idUzytkownika
};

#endif
