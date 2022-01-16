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
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    cout << "\nWypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nLogowanie:\n";
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

    cout << idUzytkownika << endl;

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);
    //idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);
    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();
    return 0;
}
