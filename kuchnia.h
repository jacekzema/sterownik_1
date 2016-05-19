#include <iostream>
#include "Pomieszczenie.h"
#pragma once

using namespace std;

class Kuchnia : public Pomieszczenie
{

    public:

    void piekarnik();
    void przedstaw_sie();
    void klimatyzacja();

    Kuchnia(string="kuchnia",float=20,float=1013,float=20);
    ~Kuchnia();



};
