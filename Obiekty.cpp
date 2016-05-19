#include <iostream>
#include <vector>
#include "Obiekty.h"

using namespace std;

    Obiekty::Obiekty()
        {

        }

    Obiekty::~Obiekty()
    {
        cout<<"Obiektow juz nie ma"<<endl;
    }

    void Obiekty::pokaz_obiekty()
        {

            for(unsigned int i=0;i<obiekty.size();i++)
            obiekty.at(i) -> kim_jestem();
        }
