#include "Poder.h"
#ifndef CURATIVO_H
#define CURATIVO_H

class Curativo:public Poder{
    protected:
        string tipo;
        
    public:
        Curativo();
        Curativo(string,string,string);
        //virtual double getArea();
        
        string toString();
        
};

#endif