#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    int id;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");
    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    id = ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(id);
    ////// ADRESAT PART ///////











    id = ksiazkaAdresowa.wylogowanieUzytkownika();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    cout << id << endl;
    return 0;
}
