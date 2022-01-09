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
    AdresaciMenedzer adresaciMenedzer("Adresaci.txt");


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
    ////////////////////////////////////////////////
    int menuUzytkownika(int idUzytkownika);
    /////////////////////////////////////////
    void wypiszWszystkichUzytkownikow();

};

#endif
