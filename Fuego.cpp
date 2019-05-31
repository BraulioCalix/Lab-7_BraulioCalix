#include "Fuego.h"
#include <iostream>
using namespace std;


Fuego::Fuego(){
    cica="";
    victorias="";
    
    
}
Fuego::Fuego(string cic,string vic, Poder* pode ,string nacio,string nombr, string eda,string sex):Persona(nacio,nombr,eda,sex){
    
    cica=cic;
    victorias=vic;
    poder=pode;
    
}

string Fuego::toString(){
    string retorno ="numero de cicatrices: ";
    retorno += cica;
    retorno+= " Victorias en pai sho: ";
    retorno += victorias;
    retorno+= "poder: ";
    retorno += poder->toString(); 
    return retorno ;
}