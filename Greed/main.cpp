#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "menu_principal.h"
#include "partida.h""


int main(){

int const TAM=5,BLOQ=2;
srand(time(0));
int opcionElegida;
int dados[TAM]{},dadosBloq[BLOQ]{},vDadosBloq;
string jugador1, jugador2;

opcionElegida = menuPrincipal();

do{
    system("cls");
   opcionElegida = menuPrincipal();
   ejecutarOpcion (opcionElegida, jugador1, jugador2);
   }
    while (opcionElegida != 0);

   return 0;
}
