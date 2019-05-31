#include "Persona.h"
#ifndef NORMALES_H
#define NORMALES_H

class Normales:public Persona{
	private:
		string trabaj;
        string fuerza;
        string velocidad;
	public:
		Normales();
	    Normales(string, string, string ,string,string,string,string);
        string toString();
};
	      
#endif