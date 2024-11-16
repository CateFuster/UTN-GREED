#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "menu_principal.h"
#include "partida.h"



int main(){
<<<<<<< Updated upstream
    int opcionElegida;
    string jugador1, jugador2;
=======
    int opcion;
    string jugador1,jugador2;
    int puntajeJugador1=0, puntajeJugador2=0;
>>>>>>> Stashed changes
    srand(time(0));

    do{
        system("cls");

<<<<<<< Updated upstream
        opcionElegida = menuPrincipal();

        system("cls");

        ejecutarOpcion (opcionElegida,jugador1,jugador2);

        cout <<endl<<"Presione una tecla para continuar"<<endl;

        system("pause>nul");

    } while (opcionElegida != 0);


=======
        opcion =  menuPrincipal();


        system("cls");

        ejecutarOpcion (opcion,jugador1,jugador2, puntajeJugador1, puntajeJugador2);

        cout <<endl<<"Presione una tecla para continuar"<<endl;

        system("pause>nul");

    } while (opcion != 0);


>>>>>>> Stashed changes
    return 0;
}
