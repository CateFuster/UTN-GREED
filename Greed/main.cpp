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
                cout<<endl<<"INGRESE NOMBRE JUGADOR: ";
                cin >> jugador1;
                break;
    case 2:
                /// MODO DOS JUGADORES
                cout<<endl<<"INGRESE NOMBRE JUGADOR 1: ";
                cin >> jugador1;
                cout<<endl<<"INGRESE NOMBRE JUGADOR 2: ";
                cin >> jugador2;
               break;
    case 3:
                ///ESTADISTICAS
                break;
    case 4:
               ///CREDITOS
               cout << endl<<"Juego realizado por: "<<endl<<endl;
               cout << "Caterina Fuster"<<endl;
               cout << "Sofia Pastor Conde"<<endl;
               cout << "Ezequiel Boyer"<<endl;
                break;

}

    return 0;
}
