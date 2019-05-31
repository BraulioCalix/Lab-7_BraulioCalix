#include "Persona.h"
#include "Poder.h"
#ifndef AGUA_H
#define AGUA_H

class Agua:public Persona{
	private:
		string tribu;
        string arma;
        Poder poder;
	public:
		Agua();
	    Agua(string, string ,Poder,string,string,string,string);
        string toString();
};
	      
#endif
