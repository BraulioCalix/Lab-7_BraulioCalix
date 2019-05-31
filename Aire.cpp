#include "Aire.h"
#include <iostream>
using namespace std;
Aire::Aire(){
    pelo="";
    color="";
}
Aire::Aire(string pel,string colo, Poder* pode ,string nacio,string nombr, string eda,string sex):Persona(nacio,nombr,eda,sex){
    
    pelo=pel;
    color=colo;
    poder=pode;
    
}

string Aire::toString(){
    string retorno ="cantidad de pelo: ";
    retorno += pelo;
    retorno+= " color de las flechas: ";
    retorno += color;
    retorno+= "poder: ";
    retorno += poder->toString(); 
    return retorno ;
}