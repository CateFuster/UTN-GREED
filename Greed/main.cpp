#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "menu_principal.h"
#include "partida.h"

int main(){

int const TAM=5,BLOQ=2;
srand(time(0));
int opcion;
int dados[TAM]{},dadosBloq[BLOQ]{};
char jugador1, jugador2;

do{
   opcion = menuPrincipal();

switch(opcion){
     case 1:
                /// MODO UN JUGADOR
                cout<<endl<<"INGRESE NOMBRE JUGADOR: ";
                cin >> jugador1;
               // tirarBloq()



                system("pause");
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
               cout << "Ezequiel Boyer"<<endl;
               cout << "Sofia Pastor Conde"<<endl;
                      break;
    case 0:
        ///CIERRE JUEGO
        cout << "Gracias por participar"<<endl;

    default:
        cout << "Opción inválida"<<endl;

}}
    while (opcion != 0);

 return 0;
}
