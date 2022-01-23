#include "KsiazkaAdresowa.h"
/*
KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
*/

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    idUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    cout << "\nWczytanie adresatow:\n";
    adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idUzytkownika);//idUzytkownika
}

int KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
}
/*
void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
}
*/
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresaciMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresaciMenedzer.dodajAdresata(idUzytkownika);
}
/*

int KsiazkaAdresowa::menuUzytkownika(int idUzytkownika)
{
    adresaciMenedzer.menuUzytkownika(idUzytkownika);
}

KsiazkaAdresowa::KsiazkaAdresowa()
{
    nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";
}

*/
