#include <iostream>
#include <string>


using namespace std;

#include "partida.h"

void solicitarNombreJugador(){
    cout<<"INGRESE SU NOMBRE";
}

void cargarNombre(string jugador[], int tam, int jug){
      int i;
    for(int j=0; j<=jug; j++){
        solicitarNombreJugador();
    }
}

void mostrarNombre(string nombre, int numero){
    cout << "Jugador: "<< nombre;
    cout << endl << "--------------------------------------" << endl;
}

int tirarDado(){
    return rand() % 6 + 1;
}

void tirarDados(int vDados[], int cantidad){
    for(int i=0; i<cantidad; i++)  {
    vDados[i] = tirarDado();
  }
}

void mostrarDados(int vDados[], int cantidad){
  for(int i=0; i<cantidad; i++)
  {
    cout << " DADO " << i+1<<":  " << vDados[i];
  }

<<<<<<< Updated upstream
void tirarDados(int vDados[], int cantidad, int vDadosBloq[]){
    int dado;
    for (int i=0; i<cantidad; i++){
        dado = tirarDado();
        vDados[i]=dado;
        //if (validarDado(dado, vDadosBloq,2)){


    }
}

void mostrarDados(int vDados[], int cantidad){
    cout << "DADOS JUGADOS: ";
    for(int i=0;i<cantidad;i++){
        cout<<vDados[i]<<" ";
    }
=======
  cout << endl;
>>>>>>> Stashed changes
}

bool validarDado(int dado, int vDadosBloq[], int cantidadBloq){
    for (int i=0; i<cantidadBloq; i++){
        if (vDadosBloq[i] == dado){
            return false;
        }
    }
    return true;
}

bool todosIguales(int dados[]) {
    for (int i = 1; i < 5; ++i) {
        if (dados[i] != dados[0]) {
            return false;
        }
    }
    return true; // Todos los dados son iguales
}

int calcularPuntaje(int dados[], int bloqueadores[]) {
    int puntaje = 0;

    // Verificar cada dado
    for (int i = 0; i < 5; ++i){
        // Sumar al puntaje si no es igual a ninguno de los bloqueadores
        if (dados[i] != bloqueadores[0] && dados [i]!= bloqueadores[1]) {
            puntaje += dados[i];
        }
    }
            if (todosIguales(dados)){
                        puntaje *=2;
        }
       return puntaje;
}

/// Jugada

int ejecutarJuego(){
    bool continuarJugando = true, todosIguales = false;
    char continuar;
    int dados[5], bloqueadores[2], seguirTirando, nroLanzamiento=1, puntajeTirada=0, puntajeRonda=0, puntajeTotal=0;

<<<<<<< Updated upstream
    bool continuarJugando = true;
    char continuar;
    int dados[5], bloqueadores[2], nroLanzamiento=1, puntosJugada, puntosTotal;
=======
    tirarDados (bloqueadores, 2);
>>>>>>> Stashed changes

    cout << "Bloqueador 1: "<< bloqueadores[0]<<endl;

    cout <<"Bloqueador 2: "<< bloqueadores[1]<<endl;

    while (continuarJugando) {
        cout << "Tirada #" << nroLanzamiento << "   ";
        tirarDados(dados,5);
        mostrarDados(dados,5);

         puntajeTirada = calcularPuntaje(dados, bloqueadores);
         cout << "Puntos de la tirada: " <<  puntajeTirada << endl;
        puntajeRonda += puntajeTirada;

        if (todosIguales== true){
                cout <<"Todos los dados son iguales. Debe tirar nuevamente."<<endl;
          return  continuarJugando;
                    }
        else {
        cout << "¿Seguir jugando s/n? "<<endl;
         cin >> continuar;
                   }
      if( continuar != 's' )  {
          continuarJugando = false;
            }
             nroLanzamiento++;
    }

         return puntajeRonda;
}

void unJugador (string nombre, int nroJugador){

int dados[5], puntajeJugador1=0, cantidadRondas=0;


do
  {
    cantidadRondas++;
    cout << endl;
    cout << "--------------------------------------" << endl;
    mostrarNombre(nombre, nroJugador);
    cout << "Ronda #" << cantidadRondas << endl;
   puntajeJugador1 = ejecutarJuego();

<<<<<<< Updated upstream
    while (continuarJugando) {
        cout << "#" << nroLanzamiento << "   ";
        tirarDados(dados,5,bloqueadores);
        mostrarDados(dados,5);
        cout << "¿Seguir jugando s/n? ";
        cin >> continuar;
        if (continuar == 'n'){
            continuarJugando = false;
        }
        /// mostrar dados sin cambiar los dados que salgan bloqueados

        nroLanzamiento++;

        //cout << endl << "Presione cualquier tecla para continuar ...";
        //system("pause>nul");
        //cout << endl;

    }
=======
    cout << "Puntaje total "<<nombre<<": " << puntajeJugador1 << endl;

  }
  while(cantidadRondas <3);
>>>>>>> Stashed changes
}


void dosJugadores (string jugador1, string jugador2){

int dados[5], puntajeJugador1=0, puntajeJugador2=0, cantidadRondas=0, estadisticasGanador=0, estadisticasRondas=0;
string jugadorActual;


 do
  {
    cantidadRondas++;
    cout << endl;
       cout << "--------------------------------------" << endl;
       // Alternar entre jugadores
        if (cantidadRondas % 2 == 1) {
            jugadorActual = jugador1;
        } else {
            jugadorActual = jugador2;
        }
        cout << "Turno de: " << jugadorActual << endl;

        cout << "Ronda #" << cantidadRondas << endl;
   puntajeJugador1 = ejecutarJuego();
   puntajeJugador2 = ejecutarJuego();

    cout << "Puntaje total jugador #1: " << puntajeJugador1 << endl;
    cout << "Puntaje total jugador #2: " << puntajeJugador2 << endl;

  }
  while(cantidadRondas <3);

  if(puntajeJugador1 >= puntajeJugador2){
    cout << "El gandor fue el jugador #1" << endl;
    estadisticasGanador = 1;
  }

  if(puntajeJugador2 >= puntajeJugador1)
  {
    cout << "El gandor fue el jugador #2" << endl;
    estadisticasGanador = 2;
  }

  estadisticasRondas = cantidadRondas;

  cout << "En la ronda #" << cantidadRondas << endl;


}




