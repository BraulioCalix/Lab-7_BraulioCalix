#include "Persona.h"
#include "Poder.h"
#ifndef AIRE_H
#define AIRE_H

class Aire:public Persona{
	private:
		string pelo;
        string color;
        Poder* poder;
	public:
		Aire();
		Aire(string, string ,Poder*,string,string,string,string);
        string toString();
};
	      
#endif
