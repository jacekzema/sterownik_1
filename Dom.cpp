#include <iostream>
#include <vector>
#include "Dom.h"
#include "Pomieszczenie.h"

using namespace std;

    Dom::Dom(string n)
        {
        cin>>n;
        name=n;
            //pomieszczenia.push_back(new Kuchnia("Kuchnia mala",12,2023,34));
           // pomieszczenia.push_back(new Kuchnia);
          //  pomieszczenia.push_back(new Wc);
           // cout<<"Ilosc pomieszczen: ";
           // cout<<pomieszczenia.size()<<endl;

           cout<<"Masz dom o nazwie: "<< name <<endl;
        }

    Dom::~Dom()
    {
    for(unsigned int i=0;i<pomieszczenia.size();i++)
            {
               delete pomieszczenia[i];
            }

        cout<<"Domu juz nie ma: "<<name<<endl;


    }

    void Dom::pokaz_pomieszczenia()
        {

            for(unsigned int i=0;i<pomieszczenia.size();i++)
            {
            cout<<i+1<<".";
            pomieszczenia.at(i) -> przedstaw_sie();
            pomieszczenia.at(i) -> Pomieszczenie::pokaz_obiekty();
            }

            return ;
        }
