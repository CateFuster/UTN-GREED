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
    cout << "Jugador: "<<nombre;
    cout << endl << "-------------------------" << endl;
}

int tirarDado(){
    return rand() % 6 + 1;
}

void tirarBloq(int vDadosBloq[], int cantidad){
    for(int i=0; i<cantidad; i++ ){
       vDadosBloq[i] = tirarDado();
    }
}

void bloqMostrar(int vDadosBloq[], int cantidad){
    cout << "DADOS BLOQUEADORES: ";
    for(int i=0;i<cantidad;i++){
        cout<<vDadosBloq[i]<<" ";
    }
    cout << endl << "--------" << endl;
}

void tirarDados(int vDados[], int cantidad, int vDadosBloq[]){
    int dado;
    for (int i=0; i<cantidad; i++){
        dado = tirarDado();
        if (validarDado(dado, vDadosBloq,2)){

        }
    }
}

bool validarDado(int dado, int vDadosBloq[], int cantidadBloq){
    for (int i=0; i<cantidadBloq; i++){
        if (vDadosBloq[i] == dado){
            return false;
        }
    }
    return true;
}

bool validarDados(int vDados[], int vDadosBloq[]){
    bool control[5];
    for (int i=0; i<6; i++){
        control[i] = validarDado(vDados[i], vDadosBloq, 2);
    }
    return control;
}

/// Jugada

void jugar(string nombre, int nroJugador){

    bool continuarJugando = true;
    int dados[5], bloqueadores[2], nroLanzamiento=1, puntosJugada, puntosTotal;

    mostrarNombre(nombre, nroJugador);
    tirarBloq(bloqueadores, 2);
    bloqMostrar(bloqueadores, 2);

    while (continuarJugando == true) {
        cout << "#" << nroLanzamiento << "   ";
        tirarDados(dados,5,bloqueadores);
        /// mostrar dados sin cambiar los dados que salgan bloqueados

        nroLanzamiento++;

        cout << endl << "Presione cualquier tecla para continuar ...";
        system("pause>nul");
        cout << endl;

    }
}

    ///Puntos

int sumaDeDados(int *v){
    int acumulador=0;
    for(int i=0;i<6;i++){
                acumulador+=v[i];
    }
     return acumulador;
}
void verPuntaje(int puntaje){
    cout<<endl;
    cout<<"PUNTAJE OBTENIDO: "<<puntaje;
    cout<<endl;
}
