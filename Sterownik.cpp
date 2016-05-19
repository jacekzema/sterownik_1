#include <iostream>
#include <cstdlib>
#include "Dom.h"
#include "Sterownik.h"
#include "Obiekt.h"

using namespace std;

Sterownik::Sterownik()
{

    cout<<"Witaj w inteligentnym mieszkaniu"<<endl;
    ilosc.push_back(new Dom);
    co_chcesz_zrobic();
}

void Sterownik::co_chcesz_zrobic()
{

    char s;
    cout<<"Co chcesz zrobic? Nacisnij odpowiedni przycisk"<<endl;
    cout<<"1. Dodaj pomieszczenie"<<endl;
    cout<<"2. Dodaj obiekt w pomieszczeniu"<<endl;
    cout<<"3. Sprawdz ilosc pomieszczen"<<endl;
    cout<<"4. Sprawdz obiekty w pomieszczeniach"<<endl;

    cin>>s;

    switch(s)
{
case '1':
    system( "cls" );
    dodaj_pomieszczenie();
    break;

case '2':
    system( "cls" );
    dodaj_obiekt();

    break;

case '3':
    system( "cls" );
    pokaz_pomieszczenia();
    break;

case '4':
    break;

default:
    system( "cls" );
    cout<<"Wybrano nieznana komende, wybierz jeszcze raz"<<endl;
    co_chcesz_zrobic();
    break;
}
}

void Sterownik::dodaj_pomieszczenie()
{
    char pom;
    cout<<"1. Dodaj pokoj"<<endl;
    cout<<"2. Dodaj sypialnie"<<endl;
    cout<<"3. Dodaj WC"<<endl;
    cout<<"4. Dodaj kuchnie"<<endl;
    cout<<"5. Powrot do glownego menu"<<endl;
    cin>>pom;
    switch(pom)
{
case '1':
    system( "cls" );
    break;

case '2':
    break;

case '3':
    system( "cls" );
    ilosc.at(0)->pomieszczenia.push_back(new Wc);
    dodaj_pomieszczenie();
    break;

case '4':
    system( "cls" );
    ilosc.at(0)->pomieszczenia.push_back(new Kuchnia);
    dodaj_pomieszczenie();
    break;

case '5':
    system( "cls" );
    co_chcesz_zrobic();
break;

default:
    system( "cls" );
    cout<<"Wybrano nieznana komende, wybierz jeszcze raz"<<endl;
    dodaj_pomieszczenie();
    break;

}
}

Sterownik::~Sterownik()
{
    cout<<endl<<"Konczymy aplikacje! Dobranoc"<<endl;
}

void Sterownik::pokaz_pomieszczenia()
{
   ilosc.at(0)->pokaz_pomieszczenia();
   co_chcesz_zrobic();

}

void Sterownik::dodaj_obiekt()
{
    cout<<"W jakim pomieszczeniu chcesz dodac obiekt?"<<endl;
    pokaz_pomieszczenia();

}
