#include "AdresaciMenedzer.h"

int AdresaciMenedzer::menuUzytkownika(int idUzytkownika)
{

    if (adresaci.empty() == true)
    // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
    // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
    // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
    idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

    wybor = wybierzOpcjeZMenuUzytkownika();

    switch (wybor)
    {
    case '1':
        //idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
        break;
    case '2':
        //wyszukajAdresatowPoImieniu(adresaci);
        break;
    case '3':
        //wyszukajAdresatowPoNazwisku(adresaci);
        break;
    case '4':
        //wyswietlWszystkichAdresatow(adresaci);
        break;
    case '5':
        //idUsunietegoAdresata = usunAdresata(adresaci);
        //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
        break;
    case '6':
        //edytujAdresata(adresaci);
        break;
    case '7':
        //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
        break;
    case '8':
        //idUzytkownika = UzytkownikMenedzer::wylogowanieUzytkownika();
        adresaci.clear();
        break;
    }
    return idUzytkownika;
}

char AdresaciMenedzer::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

int AdresaciMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

