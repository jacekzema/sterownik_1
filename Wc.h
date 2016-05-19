#include <iostream>
#include "Pomieszczenie.h"
#include "Obiekt.h"
#include "Lampka.h"
#pragma once

using namespace std;

class Wc : public Pomieszczenie
{

public:

    void spusc_wode();
    Wc(string="wc1",float=22,float=1013,float=434);
    ~Wc();

    void przedstaw_sie();
    void klimatyzacja();

};
