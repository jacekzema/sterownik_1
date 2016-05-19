#include <iostream>
#include <vector>
#include "Pomieszczenie.h"
#include "kuchnia.h"
#include "Wc.h"
#pragma once

using namespace std;

class Dom
{
    protected:


    public:
    string name;
    vector <Pomieszczenie*> pomieszczenia;
    Dom(string="domek");
    ~Dom();
    void pokaz_pomieszczenia();


};



