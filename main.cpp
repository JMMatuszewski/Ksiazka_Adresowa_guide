#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

    char wybor;
    //wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)//idZalogowanegoUzytkownika
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;

            }
        }
    }

/*
    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nRejestracja\n";
    ksiazkaAdresowa.rejestracjaUzytkownika();

    cout << "Wypisanie:\n";
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "\nLogowanie:\n";
    ksiazkaAdresowa.logowanieUzytkownika();

    cout << "\nZmiana hasla:\n";
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(); //idUzytkownika

    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    cout << "\nDodanie adresata\n";
    ksiazkaAdresowa.dodajAdresata();

    cout << "\nDodanie adresata\n";
    ksiazkaAdresowa.dodajAdresata();

    cout << "\nWypisanie adresatow:\n";
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowanieUzytkownika();
    cout << "\nWylogowanie\n";

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);
    //idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);
    //KsiazkaAdresowa.wczytajUzytkownikowZPliku();
    //idUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();
    */
    return 0;
}
