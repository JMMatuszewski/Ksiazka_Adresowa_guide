#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    int idUzytkownika = 0;
    int idOstatniegoAdresata;
    //char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");

    //wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
    ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    idUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);

    //idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);



    idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();


    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //idUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);











    idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    cout << idUzytkownika << endl;
    return 0;
}
