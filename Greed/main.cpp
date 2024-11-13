#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "menu_principal.h"
#include "partida.h"

int main(){

int opcion;
char jugador1, jugador2;


do{
   opcion = menuPrincipal();
   ejecutarOpcion (opcion, jugador1, jugador2);
   }
    while (opcion != 0);

 return 0;
}
