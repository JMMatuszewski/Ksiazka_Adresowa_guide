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
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int idOstatniegoAdresata;
    //char wybierzOpcjeZMenuUzytkownika();

public:

    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);

};

#endif
