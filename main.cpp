#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    int idUzytkownika = 0;
    char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");



    while(true)
    {
        if (idUzytkownika == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
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
            idUzytkownika = ksiazkaAdresowa.menuUzytkownika(idUzytkownika);
        }

    }




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
