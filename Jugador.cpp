#include <string.h>
#include "jugador.h"

Jugador::Jugador(){
    strcpy(nombre, "CPU");
    cartaDesafio = -1;
}

const char* Jugador::getNombre(){
    return nombre;
}

int Jugador::getCartaDesafio(){
    return cartaDesafio;
}

bool Jugador::getCartaElemento(int posicion){
    return cartasElementos[posicion];
}
//FIX
bool Jugador::verificarDesafioCumplido(){
    if (desafios[0] == true){
        return true;
    }
    return false;
}
void Jugador::setVectorPuntos(int pos, int pts){
    if (pts == -1){
        vectorPuntos[pos] = pts;
        return;
    }
    vectorPuntos[pos]+=pts;

}
int Jugador::getContadorDesafios(int posicion){
    return contadorDesafios[posicion];
}
void Jugador::setContadorDesafios(int posicion){
    contadorDesafios[posicion]++;
}

void Jugador::setDesafios(int pos){
    desafios[pos] = true;
}

//FIX
void Jugador::setNombre(const char* _nombre){
    strcpy(nombre, _nombre);
}

void Jugador::setCartaDesafio(int _cartaDesafio){
    cartaDesafio = _cartaDesafio;
}

void Jugador::setCartaElemento(int posicion){
    cartasElementos[posicion] = true;
}

void Jugador::AgregarCartaElemento(int pos){
    cartasElementos[pos] = true;
}

void Jugador::QuitarCartaElemento(int pos){
    cartasElementos[pos] = false;
}




