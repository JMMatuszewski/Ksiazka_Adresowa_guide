#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
//#include <vector>
//#include <windows.h>
//#include <fstream>
//#include <sstream>

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "AdresaciMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresaciMenedzer adresaciMenedzer;
    /////////////////////////////////////////
    int idUzytkownika;
    //const string NAZWA_PLIKU_Z_ADRESATAMI;

public:

    KsiazkaAdresowa(string NAZWAPLIKUZUZYTKOWNIKAMI, string NAZWAPLIKUZADRESATAMI)
    : uzytkownikMenedzer(NAZWAPLIKUZUZYTKOWNIKAMI), adresaciMenedzer(NAZWAPLIKUZADRESATAMI){
//nazwaPlikuZUzytkownikami
    };
    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieUzytkownika();
    //int menuUzytkownika(int idUzytkownika);
    void wypiszWszystkichUzytkownikow();
    ////////////// ADRESACI /////////////
    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();


};

#endif
