#include "Persona.h"
#include "Poder.h"
#ifndef FUEGO_H
#define FUEGO_H

class Fuego:public Persona{
	private:
		string cica;
        string victorias;
        Poder poder;
	public:
		Fuego();
	    Fuego(string, string ,Poder,string,string,string,string);
        string toString();
};
	      
#endif
