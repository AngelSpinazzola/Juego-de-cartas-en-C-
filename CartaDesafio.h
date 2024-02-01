#pragma once
#include <iostream>
#include "Jugador.h"
#include "rlutil.h"
using namespace std;

void tomarCartaDesafioDelMazo();
void verCartaDesafio(int carta);
void levantarCartaDesafio(Jugador &obj, bool mazoCartasDesafios[]);
void menuParaLevantarCartaDesafio();
void mensajeCartaObtenida(Jugador &jugador);

