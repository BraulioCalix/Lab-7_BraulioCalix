#include "Persona.h"
#include "Fuego.h"
#include "Agua.h"
#include "Tierra.h"
#include "Aire.h"
#include "Normales.h"
#include <iostream>
using namespace std;
Persona::Persona(){

    nacion="";
    nombre ="";
    edad="";
    sexo="";
}
Persona::Persona(string nacio,string nombr, string eda,string sex){
    nacion=nacio;
    nombre =nombr;
    edad=eda;
    sexo=sex;
    
    
}

string Persona::toString(){
    string retorno ="nacion: ";
    retorno += nacion;
    retorno+= " nombre: ";
    retorno += nombre;
    retorno+= " edad: ";
    retorno += edad;
    retorno += " sexo: ";
    retorno += sexo; 
    return retorno ;
}