#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    int idUzytkownika = 0;
    int idOstatniegoAdresata=0;
    //char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy3.txt");

    //wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nRejestracja\n";
    ksiazkaAdresowa.rejestracjaUzytkownika();

    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
/*
    cout << "\nLogowanie:";
    idUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();

    cout << "\nZmiana hasla:\n";
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);

    cout << "\nWypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nWczytanie adresatow:\n";
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
    system("pause");

    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    cout << "\nDodanie adresata\n";
    ksiazkaAdresowa.dodajAdresata(idUzytkownika);

    cout << "\nWczytanie adresatow:\n";
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
    system("pause");

    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();

    cout << "\nWylogowanie\n";
    cout << idUzytkownika << endl;
*/
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);
    //idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);
    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
