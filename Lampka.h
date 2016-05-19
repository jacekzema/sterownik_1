#include <iostream>
#include "Obiekt.h"
#pragma once

class Lampka : public Obiekt

{
    public:
    void kim_jestem();
    void on();
    void off();

    Lampka(string="Lampka_nocna");
    ~Lampka();
};
