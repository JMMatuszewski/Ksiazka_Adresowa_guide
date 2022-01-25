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

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();//idUzytkownika =
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresaciMenedzer = new AdresaciMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
        //adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
    }
    cout << "\nWczytanie adresatow:\n";
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();//idUzytkownika
}

int KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresaciMenedzer;
    adresaciMenedzer = NULL;
}
/*
void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
}
*/
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresaciMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresaciMenedzer -> dodajAdresata();
    }
    else
    {
        cout << "Brak zalogowanego uzytkownika" << endl;
        system("pause");
    }
    //adresaciMenedzer.dodajAdresata(idUzytkownika);
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
