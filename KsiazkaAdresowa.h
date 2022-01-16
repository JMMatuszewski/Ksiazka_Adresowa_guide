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
    int idUzytkownika;

    AdresaciMenedzer adresaciMenedzer;


    //int idOstatniegoAdresata;
    //int idUsunietegoAdresata;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idUzytkownika);
    int wylogowanieUzytkownika();
    //int menuUzytkownika(int idUzytkownika);
    void wypiszWszystkichUzytkownikow();
    /////////////////////////////////////
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata(int idUzytkownika);


};

#endif
