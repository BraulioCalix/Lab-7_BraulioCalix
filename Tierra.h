#include "Persona.h"
#include "Poder.h"
#ifndef TIERRA_H
#define TIERR_H

class Tierra:public Persona{
	private:
		string coles;
        int graduacion;
        Poder poder;
	public:
		Tierra();
	    Tierra(string, int ,Poder,string,string,string,string);
        string toString();
};
	      
#endif