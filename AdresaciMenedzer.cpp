#include "AdresaciMenedzer.h"

void AdresaciMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika)
{
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
}



