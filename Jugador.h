#pragma once

class Jugador{
    private:
        char nombre[50];
        int cartaDesafio;
        bool cartasElementos[60]={};
        //FIX
        int vectorPuntos[6]={};
        bool desafios[2]={};
        int contadorDesafios[10]={};
        //FIX
    public:
        Jugador();
        const char* getNombre();
        int getCartaDesafio();
        bool getCartaElemento(int posicion);
        void setNombre(const char* _nombre);
        void setCartaDesafio(int _cartaDesafio);
        void setCartaElemento(int _carta);
        void AgregarCartaElemento(int pos);
        void QuitarCartaElemento(int pos);

        void setVectorPuntos(int pos, int pts);
        void setDesafios(int pos);
        void setContadorDesafios(int posicion);
        int getContadorDesafios(int posicion);

        bool verificarDesafioCumplido();

};
