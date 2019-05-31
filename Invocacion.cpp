#include "Invocacion.h"
#include <iostream>
using namespace std;


Invocacion::Invocacion(){
    tipo="";
    nombre="";
    especie="";
    habilidad="";

    
}
Invocacion::Invocacion(string tip,string espe,string nomb,string habi){
    tipo=tip;
    nombre=nomb;
    especie=espe;
    habilidad=habi;
    
    
}

string Invocacion::toString(){
    string retorno ="Nombre: ";
    retorno += nombre;
    retorno += " tipo: ";
    retorno += tipo;
    retorno += " especie: ";
    retorno += especie;
    retorno += " Habilidad ";
    retorno += habilidad;
    return retorno ;
}
