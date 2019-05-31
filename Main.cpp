#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;
int main (){
    int menu=1;
    while(menu==1){
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
        case 1:
        
            break;
        
        case 2:
            break;
        case 3:
            break;
        case 4:
            cout << "gracias por usar el sistema de Registro Nacional de los Maestros (RNM)" << endl;
                menu=0;
            break;
        default: 
            cout << "ingreso una opcion invalida" << endl;
        break;

        }// fin switch

        cout<< "desea reingresar? 1) si 2) no "<<endl;
        cin >> menu; 

    }//fin while
}//fin main