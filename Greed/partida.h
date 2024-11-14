#pragma once

void solicitarNombreJugador();
void mostrarNombre(string nombre, int numero);
int tirarDado();
void tirarBloq(int vDadosBloq[], int cantidad);
void bloqMostrar(int vDadosBloq[], int cantidad);
void tirarDados(int vDados[], int cantidad, int vDadosBloq[]);
bool validarDado(int dado, int vDadosBloq[], int cantidadBloq);
bool validarDados(int vDados, int vDadosBloq);
void jugar(string nombre, int nroJugador);
int sumaDeDados(int *v);
void verPuntaje(int puntaje);

