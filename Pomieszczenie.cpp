#include <iostream>
#include "Pomieszczenie.h"

using namespace std;

Pomieszczenie::~Pomieszczenie()
{
    cout<<"Niszcze obiekt: " <<name<<endl;
}

 void Pomieszczenie::pokaz_obiekty()
        {

            for(unsigned int i=0;i<obiekty.size();i++)
            obiekty.at(i) -> kim_jestem();
        }
