#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    //char wybor;
    //wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy3.txt","Adresaci.txt");

    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nRejestracja\n";
    ksiazkaAdresowa.rejestracjaUzytkownika();

    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nLogowanie:\n";
    ksiazkaAdresowa.logowanieUzytkownika();

    //cout << "\nZmiana hasla:\n";
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(); //idUzytkownika
/*
    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    cout << "\nDodanie adresata\n";
    ksiazkaAdresowa.dodajAdresata();

    cout << "\nDodanie adresata\n";
    ksiazkaAdresowa.dodajAdresata();

    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
*/
    ksiazkaAdresowa.wylogowanieUzytkownika();
    cout << "\nWylogowanie\n";

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);
    //idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);
    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
