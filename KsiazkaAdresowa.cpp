#include "KsiazkaAdresowa.h"

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
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresaciMenedzer = new AdresaciMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
        //adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
    }
    //cout << "\nWczytanie adresatow:\n";
    //adresaciMenedzer->wyswietlWszystkichAdresatow();//  TEMPORARY //
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresaciMenedzer;
    adresaciMenedzer = NULL;
}

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

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    return uzytkownikMenedzer.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresaciMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresaciMenedzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresaciMenedzer->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresaciMenedzer->edytujAdresata();
}
/*

int KsiazkaAdresowa::menuUzytkownika(int idUzytkownika)
{
    adresaciMenedzer.menuUzytkownika(idUzytkownika);
}
*/
