#pragma once
#include "Jugador.h"
#include "CargarCadena.h"

void Iniciar(Jugador &jugador, Jugador &obj);
void PedirNombre(Jugador &jugador);
int MostrarMenuJuego(Jugador &jugador);
void robarCartaElemento(Jugador &obj);
int empezarRonda(Jugador &jugador, Jugador &cpu, int rondas, int cartaElementoJugador, int cartaElementoCpu);
void verificarDesafioCumplido(Jugador &obj);
