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

#include "UzytkownikMenedzer.h"
#include "Uzytkownik.h"

using namespace std;

class AdresaciMenedzer
{
    char wybor;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuUzytkownika();

public:
    AdresaciMenedzer(string nazwaPlikuZUzytkownikami) : plikZAdresatami(nazwaPlikuZUzytkownikami){};

    int menuUzytkownika(int idUzytkownika);

};

#endif
