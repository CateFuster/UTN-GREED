#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "menu_principal.h"
#include "partida.h"

int main(){

int opcionElegida;
char jugador1, jugador2;


do{
   opcionElegida = menuPrincipal();
   ejecutarOpcion (opcionElegida, jugador1, jugador2);
   }
    while (opcionElegida != 0);

 return 0;
}
