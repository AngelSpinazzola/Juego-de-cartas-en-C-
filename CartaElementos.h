#pragma once
#include <iostream>
using namespace std;
#include "Jugador.h"
#include <ctime>

void asignarTresCartasAlAzar(Jugador &obj, bool mazoCartasElementos[]);
void verCartasElementos(Jugador &jugador);
int robarCartaElemento(Jugador &obj, bool mazoCartasElementos[]);
//void mostrarCartaElementoLevantada(int pos);
void dibujarCartaElemento(int i);
int mostrarMazoElementos(Jugador &jugador, int rondas);
int otorgarCartaElementoCpu(Jugador &cpu);
void mostrarCartaElegida(Jugador &obj, int carta);
void cartaElementoDibujar(int carta);
int determinarQuienGanoRonda(Jugador &jugador, Jugador &cpu, int cartaElementoJugador, int cartaElementoCpu);
void toStringCartaElemento(int cartaElemento);

void dibujarNaipeElemento(int carta, int columna, int fila);

void pantallaCarga();
