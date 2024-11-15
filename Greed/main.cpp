#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "menu_principal.h"
#include "partida.h""


int main(){
    int opcionElegida;
    string jugador1, jugador2;
    srand(time(0));

    do{
        system("cls");

        opcionElegida = menuPrincipal();

        system("cls");

        ejecutarOpcion (opcionElegida,jugador1,jugador2);

        cout <<endl<<"Presione una tecla para continuar"<<endl;

        system("pause>nul");

    } while (opcionElegida != 0);


    return 0;
}
