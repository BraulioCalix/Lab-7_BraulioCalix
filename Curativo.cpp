#include "Curativo.h"
#include <iostream>
using namespace std;


Curativo::Curativo(){
    tipo="";
    
}
Curativo::Curativo(string tip,string nombre, string nivel):Poder(nombre,nivel){
    tipo=tip;
    
    
}

string Curativo::toString(){
    string retorno ="tipo: ";
    retorno += tipo;
    return retorno ;
}
