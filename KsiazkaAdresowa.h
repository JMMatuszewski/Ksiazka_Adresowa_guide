#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
//#include <vector>
//#include <windows.h>
//#include <fstream>
//#include <sstream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;


    //int idOstatniegoAdresata;
    //int idUsunietegoAdresata;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    //KsiazkaAdresowa();
};

#endif
