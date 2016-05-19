#include <iostream>
#include "Wc.h"

using namespace std;

Wc::Wc(string n,float t,float c,float w)
{
   name=n;
   temperatura=t;
   cisnienie=c;
   wilgotnosc=w;
   obiekty.push_back(new Lampka);

   cout<<"Stworzono wc: "<<name<<endl;
}



Wc::~Wc()
{
    cout<<"Nie ma WC"<<endl;
}

void Wc::spusc_wode()
{
    cout<<"Spuszczono wode w: "<<name<<endl;
}

void Wc::przedstaw_sie()
{
    cout<<"Jestem: "<<name<<" Mam temperature: "<<temperatura<<" Cisnienie: " <<cisnienie<<" Wilgotnosc: "<<wilgotnosc<<endl;
}

void Wc::klimatyzacja()
{

}


