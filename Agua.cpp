#include "Agua.h"
#include <iostream>
using namespace std;


Agua::Agua(){
    tribu="";
    arma="";
    
    
}
Agua::Agua(string trib,string arm, Poder* pode ,string nacio,string nombr, string eda,string sex):Persona(nacio,nombr,eda,sex){
    
    tribu=trib;
    arma=arm;
    poder=pode;
    
}

string Agua::toString(){
    string retorno ="Tribu: ";
    retorno += tribu;
    retorno+= " arma: ";
    retorno += arma;
    retorno+= "poder: ";
    retorno += poder->toString(); 
    return retorno ;
}