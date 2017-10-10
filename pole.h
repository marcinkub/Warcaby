#ifndef POLE_H
#define POLE_H
#include <QString>

enum FIGURA{
    pion,damka,pole
};

enum FIGURA_KOLOR{
    brak,bialy,czarny
};

class Pole
{
public:
    Pole();
    static int Konwersja_do_index(int nWiersza, int nKolumny);
    static int* Konwersja_do_wspolrzednych(int index);
    static FIGURA Konwersja_string_figura(QString nazwa);
    static QString Konwersja_figura_string(FIGURA f);
};

#endif // POLE_H
