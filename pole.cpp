#include "pole.h"

Pole::Pole()
{

}
int Pole::Konwersja_do_index(int nWiersza, int nKolumny)
{
    return (nWiersza-1)*8+(nKolumny-1);
}

int* Pole::Konwersja_do_wspolrzednych(int index)
{
    int* tab = new int[2];
            tab[1] = index%8+1;
            int wiersz = 0;
            int licznik = 0;
            for(int i=0; i<=index;i++)
            {
                if(licznik == 8)
                {
                    wiersz++;
                    licznik=0;
                }
                licznik++;
            }
            tab[0] = wiersz+1;
            return tab;
}

FIGURA Pole::Konwersja_string_figura(QString nazwa)
{
    if(nazwa == "pion") return pion;
    else if(nazwa == "damka") return damka;
    else return pole;
}

QString Pole::Konwersja_figura_string(FIGURA f)
{
    if(f==pion) return "pion";
    else if(f==damka) return "damka";
    else return "pole";
}
