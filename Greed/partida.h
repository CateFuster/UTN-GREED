#pragma once
#include <string>

using namespace std;


void solicitarNombreJugador();
void cargarNombre(string jugador[], int tam, int jug);
void mostrarNombre(string nombre, int numero);
int tirarDado();
void tirarBloq(int vDadosBloq[], int cantidad);
void bloqMostrar(int vDadosBloq[], int cantidad);
void tirarDados(int vDados[], int cantidad, int vDadosBloq[]);
bool validarDado(int dado, int vDadosBloq[], int cantidadBloq);
bool validarDados(int vDados, int vDadosBloq);
<<<<<<< Updated upstream
void jugar(string nombre, int nroJugador);
=======
int ejecutarJuego();
void dosJugadores(string jugador1, string jugador2);
void unJugador(string jugador1, int nroJugador);
>>>>>>> Stashed changes
void mostrarDados(int vDados[], int cantidad);
int sumaDeDados(int *v);
void verPuntaje(int puntaje);

