#include "Tierra.h"
#include <iostream>
using namespace std;


Tierra::Tierra(){
    coles="";
    graduacion=0;
}
Tierra::Tierra(string col,int gra, Poder* pode ,string nacio,string nombr, string eda,string sex):Persona(nacio,nombr,eda,sex){
    
    coles=col;
    graduacion=gra;
    poder=pode;
    
}

string Tierra::toString(){
    string retorno ="numero de coles: ";
    retorno += coles;
    retorno+= " Graduacion: ";
    retorno += graduacion;
    retorno+= "poder: ";
    retorno += poder->toString(); 
    return retorno ;
}