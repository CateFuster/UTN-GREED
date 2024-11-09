#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "menu_principal.h"

int main()
{
int const TAM=5,BLOQ=2;
srand(time(0));
int opcion;
int dados[TAM]{},dadosBloq[BLOQ]{};
char jugador1, jugador2;

opcion = menuPrincipal();

switch(opcion){
     case 1:
                /// MODO UN JUGADOR
                cout<<"INGRESE NOMBRE JUGADOR: ";
                cin >> jugador1;
    case 2:
                /// MODO DOS JUGADORES
                cout<<"INGRESE NOMBRE JUGADOR 1: ";
                cin >> jugador1;
                cout<<"INGRESE NOMBRE JUGADOR 2: ";
                cin >> jugador2;

                            break;
}

    return 0;
}
