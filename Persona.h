#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
class Persona{
    private:
    string nacion; 
    string nombre;
    string edad;
    string sexo;
	public:
    Persona();
    Persona(string, string,string,string);
    string toString();
};
#endif
