#include <iostream>
#include "kuchnia.h"
#include "Obiekt.h"
#include "Lampka.h"

using namespace std;

Kuchnia::Kuchnia(string n,float t,float c,float w)
{
   name=n;
   temperatura=t;
   cisnienie=c;
   wilgotnosc=w;
   cout<<"Stworzono kuchnie: "<<name<<endl;
   return ;

   //obiekty.push_back(new Lampka);
   // pokaz_obiekty(); // pokazuje obiekty jakie znajdują się z danych pomieszczeniu
}



void Kuchnia::piekarnik()
{
    cout<<"Wlaczono piekarnik w kuchni: "<<name<<endl;
}

void Kuchnia::przedstaw_sie()
{
    cout<<"Jestem: "<<name<<" Mam temperature: "<<temperatura<<" Cisnienie: " <<cisnienie<<" Wilgotnosc: "<<wilgotnosc<<endl;
}

Kuchnia::~Kuchnia()
{
    cout<<"Zniszczyc wszystko"<<endl;
}


void Kuchnia::klimatyzacja()
{
    temperatura--;
    cout <<"klima wlaczona, temperatura w: "<<name<< " teraz wynosi: "<<temperatura<<endl;
}
