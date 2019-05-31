#include "Normales.h"
#include <iostream>
using namespace std;


Normales::Normales(){
    velocidad="";
    trabaj="";
    fuerza="";
}
Normales::Normales(string velo,string trab, string fuer,string nacio,string nombr, string eda,string sex):Persona(nacio,nombr,eda,sex ){
    
    velocidad=velo;
    trabaj=trab;
    fuerza=fuer;
    
}

string Normales::toString(){
    string retorno ="velocidad: ";
    retorno += velocidad;
    retorno+= " fuerza: ";
    retorno += fuerza;
    retorno+= "trabajo: ";
    retorno += trabaj;
    return retorno ;
}