#include <iostream>
#include "partida.h"
#include "menu_principal.h"

using namespace std;



 /// MENU PRINCIPAL
int menuPrincipal(){
    int opcion = 0;

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
<<<<<<< Updated upstream
void ejecutarOpcion(int opcion,string jugador1, string jugador2){
=======

 void estadisticas(int estadisticasGanador, int estadisticasRondas){
  cout << "El mayor puntaje lo obtuvo el jugador # " << estadisticasGanador<< endl;
}
void ejecutarOpcion(int opcion,string jugador1, string jugador2, int &estadisticasGanador, int &estadisticasRondas){
>>>>>>> Stashed changes

   switch(opcion){
     case 1:
            /// MODO UN JUGADOR
            cout<<endl<<"INGRESE NOMBRE JUGADOR: ";
            cin >> jugador1;

<<<<<<< Updated upstream
            jugar(jugador1,1);
=======
            unJugador(jugador1, 1);
>>>>>>> Stashed changes

            break;
    case 2:
            /// MODO DOS JUGADORES
            cout<<endl<<"INGRESE NOMBRE JUGADOR 1: ";
            cin >> jugador1;
            cout<<endl<<"INGRESE NOMBRE JUGADOR 2: ";
            cin >> jugador2;
<<<<<<< Updated upstream
=======
            dosJugadores (jugador1, jugador2);
>>>>>>> Stashed changes

            break;
    case 3:
            ///ESTADISTICAS
<<<<<<< Updated upstream
=======
            estadisticas(estadisticasGanador, estadisticasRondas);
>>>>>>> Stashed changes

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

            //system("pause");
            break;

    default:
            cout << "Opción inválida"<<endl;

            break;

}

}

