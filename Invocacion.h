#include "Poder.h"
#ifndef INVOCACION_H 
#define INVOCACION_H

class Invocacion:public Poder{
    protected:
        string nombre;
        string especie;
        string habilidad;
        string tipo;
    public:
        Invocacion();
        Invocacion(string,string ,string,string);
        string toString();
        
};

#endif