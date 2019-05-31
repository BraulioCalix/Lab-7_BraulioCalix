#include "Poder.h"
#ifndef DEFENCIVO_H
#define DEFENCIVO_H

class Defencivo:public Poder{
    protected:
        string resistencia;
        string duracion;
    public:
        Defencivo();
        Defencivo(string ,string);
        //virtual double getArea();
        
        string toString();
        
};

#endif