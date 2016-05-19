#include <iostream>
#include <vector>
#pragma once
#include "Obiekt.h"


using namespace std;

class Pomieszczenie
{
    public:
    string name;
    float temperatura;
    float cisnienie;
    float wilgotnosc;
    vector <Obiekt*> obiekty;

//    virtual void piekarnik()=0;
    virtual void przedstaw_sie()=0;
    virtual void klimatyzacja()=0;
//    virtual void spusc_wode()=0;
    ~Pomieszczenie();

 void pokaz_obiekty();

};
