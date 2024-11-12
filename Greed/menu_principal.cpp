#include <iostream>

using namespace std;

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
