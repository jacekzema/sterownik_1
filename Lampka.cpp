#include <iostream>
#include "Lampka.h"
#include "Pomieszczenie.h"

using namespace std;

Lampka::Lampka(string n)
{
    name=n;
    cout<<"Jestem: "<<name<<endl;
}

Lampka::~Lampka()
{
    cout<<"Bylem: "<<name<<endl;
}

void Lampka::kim_jestem()
{
    cout<<"Jestem: "<<name<<endl;
}
void Lampka::on()
{
    if (czy_on==0)
    {
        czy_on=1;
        cout<<"Wlaczono Lampke: "<<name<<endl;
    }
    else
    {
        cout<<"Lampka juz jest wlaczona"<<endl;
    }
}
void Lampka::off()
{
        if (czy_on==1)
    {
        czy_on=0;
        cout<<"Wylaczono Lampke: "<<name<<endl;
    }
    else
    {
        cout<<"Lampka jest wlaczona OFF"<<endl;
    }
}
