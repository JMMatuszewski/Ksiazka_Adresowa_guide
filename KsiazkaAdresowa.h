#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "AdresaciMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresaciMenedzer *adresaciMenedzer;
    /////////////////////////////////////////
    //int idUzytkownika;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:

    KsiazkaAdresowa(string NAZWAPLIKUZUZYTKOWNIKAMI, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer(NAZWAPLIKUZUZYTKOWNIKAMI), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)//adresaciMenedzer
    {
        adresaciMenedzer = NULL;
    };
    ~KsiazkaAdresowa()  //DESTRUKTOR
    {
        delete adresaciMenedzer;
        adresaciMenedzer = NULL;
    };
    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieUzytkownika();
    //int menuUzytkownika(int idUzytkownika);
    void wypiszWszystkichUzytkownikow();
    ////////////// ADRESACI /////////////
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();


};

#endif
