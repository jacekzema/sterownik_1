#include <iostream>
#pragma once

using namespace std;

class Obiekt
{
    public:
    string name;
    bool czy_on;

    virtual void kim_jestem()=0;
    virtual void on()=0;
    virtual void off()=0;
};
