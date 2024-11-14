#include <iostream>

using namespace std;

#include "menu_principal.h"

 /// MENU PRINCIPAL
int menuPrincipal(){
    int opcion = 0;

    system("cls");
    cout<<"----MENU PRINCIPAL----"<<endl;
    cout<<"1 - MODO UN JUGADOR"<<endl;
    cout<<"2 - MODO DOS JUGADORES"<<endl;
    cout<<"3 - ESTADISTICAS"<<endl;
    cout<<"4 - CREDITOS"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"0 - SALIR"<<endl<<endl;
    cout<<"Opcion: ";

    cin>>opcion;

    return opcion;
 }
void ejecutarOpcion(int opcion){

   switch(opcion){
     case 1:
                /// MODO UN JUGADOR


                             break;
    case 2:
                /// MODO DOS JUGADORES


               break;
    case 3:
                ///ESTADISTICAS

                break;
    case 4:
        ///CREDITOS (no se ven no se por que)
        cout<<"Juego realizado por el equipo... "<<endl<<endl;
        cout<<"Integrantes: "<<endl<<endl;
        cout<<"Caterina Fuster"<<endl;
        cout<<"Ezequiel Boyer"<<endl;
        cout<<"Sofia Pastor Conde"<<endl;


               break;

    case 0:
        ///CIERRE JUEGO
        cout << "Gracias por utilizar nuestro juego!"<<endl;
        break;

    default:
        cout << "Opción inválida"<<endl;
        break;

}

}

