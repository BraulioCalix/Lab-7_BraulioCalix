#include "Ofencivo.h"
#include <iostream>
using namespace std;


Ofencivo::Ofencivo(){
    rango="";
    fuerza="";
}
Ofencivo::Ofencivo(string rang,string fuerz){
    rango=rang;
    fuerza=fuerz;
    
}


string Ofencivo::toString(){
    string retorno ="Rango: ";
    retorno +=rango;
    retorno += " Fuerza: ";
    retorno += fuerza;
    return retorno ;
}

