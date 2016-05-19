#include <iostream>
#include "Dom.h"

#pragma once

using namespace std;

class Sterownik
{
    protected:
    vector <Dom*> ilosc;

    public:

        Sterownik();
        ~Sterownik();
        void co_chcesz_zrobic();
        void dodaj_pomieszczenie();
        void dodaj_obiekt();
        void pokaz_pomieszczenia();
        void pokaz_obiekty_w_pomieszczeniach();




};



