#include "Poder.h"
#ifndef OFENCIVO_H
#define OFENCIVO_H

class Ofencivo:public Poder{
    protected:
        string rango;
        string fuerza;
    public:
        Ofencivo();
        Ofencivo(string ,string);
        //virtual double getArea();
        string getRango();
        string getFuerza();
        string toString();
        
};

#endif