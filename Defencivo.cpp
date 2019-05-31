#include "Defensivo.h"
#include <iostream>
using namespace std;


Defencivo::Defencivo(){
    resistencia="";
    duracion="";
}
Defencivo::Defencivo(string resis,string dura,string nombre,string nivel):Poder(nombre, nivel){
    resistencia=resis;
    duracion=dura;
    
}

string Defencivo::toString(){
    string retorno ="Resistencia: ";
    retorno +=resistencia;
    retorno += " Duracion: ";
    retorno += duracion;
    return retorno ;
}

