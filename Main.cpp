#include <iostream>
#include <typeinfo>
#include "Persona.h"
#include "Poder.h"
#include "Normales.h"
#include "Invocacion.h"
#include "Aire.h"
#include "Fuego.h"
#include "Tierra.h"
#include "Agua.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Ofencivo.h"
#include <vector>
using namespace std;
int main (){
    vector <Agua*> agua;
    vector <Tierra*> tierra;
    vector <Fuego*> fuego;
    vector <Aire*> aire;
    vector <Normales*> normal;
    int menu=1;
    while(menu==1){
        string nombre="";
        string nacion="";
        string edad="";
        string sexo="";
        cout << "Registro Nacional de los Maestros (RNM)"<<endl;
        cout << "Bienvenido"<< endl;
        cout << "Que desea hacer?"<< endl;
        cout << "1) agregar Mestros al registro"<< endl;
        cout << "2) Listar Maestros del registro"<< endl;
        cout << "3) Eliminar Maestros del Registro" << endl;
        cout << "4) salir"<< endl;
        //ingresar todas las opciones 
        int opcion =0;
        cin >>opcion;
        switch (opcion){
        case 1:// agregar{
            cout << "bienvenido a al sistema de de agregado de personas"<< endl;
            cout<< "que desea agregar?"<<endl;
            cout << "1) maestro aire "<< endl;
            cout << "2) maestro tierra "<< endl;
            cout << "3) maestro agua "<< endl;
            cout << "4) maestro fuego "<< endl;
            cout << "5) persona normal "<< endl;
            int tipo=0;
            cin >> tipo;
            switch (tipo){
            case 1:{// aire
                    cout << "ingrese el nombre: "<<endl;
                    cin>> nombre;
                    cout << "ingrese la nacion: "<< endl;
                    cin >>nacion;
                    cout << "ingrese la edad"<< endl;
                    cin >> edad;
                    cout << "ingrese el sexo "<< endl;
                    cin >> sexo;
                    cout << "ingrese la cantidad de pelo del maestro: "<<endl;
                    string pelo="";
                    cin >> pelo;
                    cout << "ingrese el color de las flechas del maestro"<< endl;
                    string color="";
                    cin >> color;
                    
                    bool termino=false;
                    while (termino==false){
                        cout << "ingrese el tipo de poder del maestro: "<<endl;
                        cout << "1)ofensivo 2)curativo 3) defensivo 4) invocacion  :"<< endl;
                        int poder=0;
                        cin >> poder;
                        switch (poder){// switch poder
                        case 1:{        
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel; 
                            cout << "ingrese el rango del poder: "<< endl;
                            string rango="";
                            cin >> rango;
                            cout << "ingrese la fuerza del poder"<< endl;
                            string fuerza="";
                            cin>> fuerza;
                            Poder* poder = new Ofencivo(rango,fuerza,nom , nivel ); 
                            Aire* air = new Aire (pelo,color,poder,nacion,nombre,edad,sexo);
                            aire.push_back(air);
                            termino=true;
                        }break;
                        case 2:{
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese eltipo del poder: "<< endl;
                            string tipo= "";
                            cin >> tipo;
                            Poder* poder = new Curativo(tipo ,nom,nivel);
                            Aire* air = new Aire (pelo,color,poder,nacion,nombre,edad,sexo);
                            aire.push_back(air);
                            termino=true;
                        }break;
                        case 3:{//defen
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese la resistenia del poder: " <<endl;
                            string resis="";
                            cin>> resis;
                            cout << "ingrese la duracion del poder: "<< endl;
                            string dura="";
                            cin >> dura;
                            Poder* poder = new Defencivo(resis,dura,nom,nivel);
                            Aire* air = new Aire (pelo,color,poder,nacion,nombre,edad,sexo);
                            aire.push_back(air);
                            termino=true;
                        }break;
                        case 4:{//invo
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese el nombre de la invocacion: "<< endl;
                            string nomin="";
                            cin >>nomin;
                            cout << "ingrese la especie de la invocacion: "<< endl;
                            string especie="";
                            cin >> especie;
                            cout<< "ingrese la habilidad de la invocacion: "<< endl;
                            string habi="";
                            cin >> habi;
                            cout << "ingrese el tipo de invocacion: "<< endl;
                            string tip ="";
                            cin >>tip;
                            Poder* poder = new Invocacion(tip,especie,nomin,habi,nom,nivel);
                            Aire* air = new Aire (pelo,color,poder,nacion,nombre,edad,sexo);
                            aire.push_back(air);
                            termino=true;
                        }break;
                        default:
                        cout << "ingreso un valor no valido"<< endl;
                        break;
                        }//fin switch del poder
                    }//fin while de creacion     
                }
                break;
                case 2:{//tierrra
                    cout << "ingrese el nombre: "<<endl;
                    cin>> nombre;
                    cout << "ingrese la nacion: "<< endl;
                    cin >>nacion;
                    cout << "ingrese la edad"<< endl;
                    cin >> edad;
                    cout << "ingrese el sexo "<< endl;
                    cin >> sexo;
                    cout << "ingrese el numero de coles cosechadas: "<< endl;
                    string col="";
                    cin >>col;
                    bool grad=false;
                    
                    bool termino=false;
                    while (termino==false){
                        cout << "ingrese el tipo de poder del maestro: "<<endl;
                        cout << "1)ofensivo 2)curativo 3) defensivo 4) invocacion  :"<< endl;
                        int poder=0;
                        cin >> poder;
                        switch (poder){// switch poder
                        case 1:{ 
                            int gradua=0;   
                            while (grad==false){
                                cout << "ingrese la graduacion entre 0< 20: "<< endl;
                                
                                cin>> gradua;
                                if(gradua > 0 && gradua < 21){
                                    grad=true;
                                }
                            }    
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel; 
                            cout << "ingrese el rango del poder: "<< endl;
                            string rango="";
                            cin >> rango;
                            cout << "ingrese la fuerza del poder"<< endl;
                            string fuerza="";
                            cin>> fuerza;
                            Poder* poder = new Ofencivo(rango,fuerza,nom , nivel ); 
                            Tierra* tier = new  Tierra(col,gradua,poder,nacion,nombre,edad,sexo);
                            tierra.push_back(tier);
                            termino=true;
                        }break;
                        case 2:{
                            int gradua=0;   
                            while (grad==false){
                                cout << "ingrese la graduacion entre 0< 20: "<< endl;
                                
                                cin>> gradua;
                                if(gradua > 0 && gradua < 21){
                                    grad=true;
                                }
                            }  
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese eltipo del poder: "<< endl;
                            string tipo= "";
                            cin >> tipo;
                            Poder* poder = new Curativo(tipo ,nom,nivel);
                            Tierra* tier = new Tierra (col,gradua,poder,nacion,nombre,edad,sexo);
                            tierra.push_back(tier);
                            termino=true;
                        }break;
                        case 3:{//defen
                                int gradua=0;   
                                while (grad==false){
                                cout << "ingrese la graduacion entre 0< 20: "<< endl;
                                
                                cin>> gradua;
                                    if(gradua > 0 && gradua < 21){
                                        grad=true;
                                    }
                                }  
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese la resistenia del poder: " <<endl;
                            string resis="";
                            cin>> resis;
                            cout << "ingrese la duracion del poder: "<< endl;
                            string dura="";
                            cin >> dura;
                            Poder* poder = new Defencivo(resis,dura,nom,nivel);
                            Tierra* tier = new Tierra (col,gradua,poder,nacion,nombre,edad,sexo);
                            tierra.push_back(tier);
                            termino=true;
                        }break;
                        case 4:{//invo
                            int gradua=0;   
                            while (grad==false){
                                cout << "ingrese la graduacion entre 0< 20: "<< endl;    
                                cin>> gradua;
                                if(gradua > 0 && gradua < 21){
                                    grad=true;
                                }
                            }  
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese el nombre de la invocacion: "<< endl;
                            string nomin="";
                            cin >>nomin;
                            cout << "ingrese la especie de la invocacion: "<< endl;
                            string especie="";
                            cin >> especie;
                            cout<< "ingrese la habilidad de la invocacion: "<< endl;
                            string habi="";
                            cin >> habi;
                            cout << "ingrese el tipo de invocacion: "<< endl;
                            string tip ="";
                            cin >>tip;
                            Poder* poder = new Invocacion(tip,especie,nomin,habi,nom,nivel);
                            Tierra* tier = new Tierra (col,gradua,poder,nacion,nombre,edad,sexo);
                            tierra.push_back(tier);
                            termino=true;
                        }break;
                        default:
                        cout << "ingreso un valor no valido"<< endl;
                        break;
                        }//fin switch del poder
                    }//fin while de creacion     

                     
                }break;
                case 3:{//agua
                    cout << "ingrese el nombre: "<<endl;
                    cin>> nombre;
                    cout << "ingrese la nacion: "<< endl;
                    cin >>nacion;
                    cout << "ingrese la edad"<< endl;
                    cin >> edad;
                    cout << "ingrese el sexo "<< endl;
                    cin >> sexo;
                    cout <<"ingrese la tribu"<< endl;
                    string tribu="";
                    cin >>tribu ;
                    string arma="";
                    cout << "ingrese el arma favorita"<< endl;
                    cin >> arma;
                    bool termino=false;
                    while (termino==false){
                        cout << "ingrese el tipo de poder del maestro: "<<endl;
                        cout << "1)ofensivo 2)curativo 3) defensivo 4) invocacion  :"<< endl;
                        int poder=0;
                        cin >> poder;
                        switch (poder){// switch poder
                        case 1:{        
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel; 
                            cout << "ingrese el rango del poder: "<< endl;
                            string rango="";
                            cin >> rango;
                            cout << "ingrese la fuerza del poder"<< endl;
                            string fuerza="";
                            cin>> fuerza;
                            Poder* poder = new Ofencivo(rango,fuerza,nom , nivel ); 
                            Agua* agu = new Agua (tribu,arma,poder,nacion,nombre,edad,sexo);
                            agua.push_back(agu);
                            termino=true;
                        }break;
                        case 2:{
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese eltipo del poder: "<< endl;
                            string tipo= "";
                            cin >> tipo;
                            Poder* poder = new Curativo(tipo ,nom,nivel);
                            Agua* agu = new Agua (tribu,arma,poder,nacion,nombre,edad,sexo);
                            agua.push_back(agu);
                            termino=true;
                        }break;
                        case 3:{//defen
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese la resistenia del poder: " <<endl;
                            string resis="";
                            cin>> resis;
                            cout << "ingrese la duracion del poder: "<< endl;
                            string dura="";
                            cin >> dura;
                            Poder* poder = new Defencivo(resis,dura,nom,nivel);
                            Agua* agu = new Agua (tribu,arma,poder,nacion,nombre,edad,sexo);
                            agua.push_back(agu);
                            termino=true;
                        }break;
                        case 4:{//invo
                            cout << "ingrese el nombre del poder: "<< endl;
                            string nom="";
                            cin >> nom;
                            cout << "ingrese el nivel del poder: "<< endl;
                            string nivel="";
                            cin>>nivel;
                            cout << "ingrese el nombre de la invocacion: "<< endl;
                            string nomin="";
                            cin >>nomin;
                            cout << "ingrese la especie de la invocacion: "<< endl;
                            string especie="";
                            cin >> especie;
                            cout<< "ingrese la habilidad de la invocacion: "<< endl;
                            string habi="";
                            cin >> habi;
                            cout << "ingrese el tipo de invocacion: "<< endl;
                            string tip ="";
                            cin >>tip;
                            Poder* poder = new Invocacion(tip,especie,nomin,habi,nom,nivel);
                            Agua* agu = new Agua (tribu,arma,poder,nacion,nombre,edad,sexo);
                            agua.push_back(agu);
                            termino=true;
                        }break;
                        default:
                        cout << "ingreso un valor no valido"<< endl;
                        break;
                        }//fin switch del poder
                    }//fin while de creacion  


                }break;
                case 4:{//fuego
                    cout << "ingrese el nombre: "<<endl;
                    cin>> nombre;
                    cout << "ingrese la nacion: "<< endl;
                    cin >>nacion;
                    cout << "ingrese la edad"<< endl;
                    cin >> edad;
                    cout << "ingrese el sexo "<< endl;
                }break;
                case 5:{//normales
                    cout << "ingrese el nombre: "<<endl;
                    cin>> nombre;
                    cout << "ingrese la nacion: "<< endl;
                    cin >>nacion;
                    cout << "ingrese la edad"<< endl;
                    cin >> edad;
                    cout << "ingrese el sexo "<< endl;

                }break;
            default:{
                cout << "opcion invalida, regresara al menu"<< endl;
            }
                break;
            }//fin switch de creacion
        case 2://listar
        {
            cout<< "se listaran los maestros agua: ";
            
            if(agua.size()==0){
                cout << "no se han agregado maestros agua"<< endl;
            }else{
                for (int i = 0; i < agua.size(); i++){
                    agua[i]->toString();
                }
            }//maestros agua
            if(fuego.size()==0){
                cout << "no se han agregado maestros fuego"<< endl;
            }else{
                for (int i = 0; i < fuego.size(); i++){
                    fuego[i]->toString();
                }
            }//maestros fuego
            if(tierra.size()==0){
                cout << "no se han agregado maestros tierra"<< endl;
            }else{
                for (int i = 0; i < tierra.size(); i++){
                    tierra[i]->toString();
                }
            }//maestros tierra
            if(aire.size()==0){
                cout << "no se han agregado maestros aire"<< endl;
            }else{
                for (int i = 0; i < aire.size(); i++){
                    aire[i]->toString();
                }
            }//maestros aire
            if(normal.size()==0){
                cout << "no se han agregado non-bender"<< endl;
            }else{
                for (int i = 0; i < normal.size(); i++){
                    normal[i]->toString();
                }
            }//maestros agua
        }
            break;
        case 3://eliminar
        {

        }
            break;
        case 4:{
            cout << "gracias por usar el sistema de Registro Nacional de los Maestros (RNM)" << endl;
                menu=0;
            
        }break;
        default: 
            cout << "ingreso una opcion invalida" << endl;
        break;

        }// fin switch

        cout<< "desea reingresar? 1) si 2) no "<<endl;
        cin >> menu; 

    }//fin while
    agua.clear();
	normal.clear();
	tierra.clear();
    fuego.clear();
    aire.clear();

}//fin main