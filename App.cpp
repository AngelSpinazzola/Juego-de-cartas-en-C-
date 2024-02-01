#include <iostream>
using namespace std;
#include "rlutil.h"
#include "App.h"
#include "Juego.h"
#include "Jugador.h"
#include "CartaDesafio.h"
#include "CartaElementos.h"
Jugador jugador;
Jugador cpu;

void App::Ejecutar(){
    MenuBienvenida();

    int opcion;
    do{
        opcion = MenuPrincipal();
        switch (opcion){
        case 1:
                Iniciar(jugador, cpu);
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        default: cout << "Vuelva a ingresar" << endl;
        break;
        }

    }while(opcion != 0);
}


int App::MenuPrincipal(){
    int opcion;
    rlutil::locate(50,10);
    rlutil::setColor(rlutil::RED);
    cout << " C";
    rlutil::setColor(rlutil::WHITE);
    cout << "ARD-JITSU";
    rlutil::setColor(rlutil::RED);
    cout << "++";
    rlutil::locate(41,11);
    cout << "*-----------------------------------*";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(50,12);
    cout << "1 - JUGAR" << endl;
    rlutil::locate(50,13);
    cout << "2 - ESTADISTICAS" << endl;
    rlutil::locate(50,14);
    cout << "3 - CREDITOS" << endl;
    rlutil::locate(50,15);
    cout << "4 - REGLAS DEL JUEGO" << endl;
    rlutil::locate(41,16);
    rlutil::setColor(rlutil::RED);
    cout << "*------------------------------------*" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(50,17);
    cout << "0 - SALIR" << endl;
    rlutil::locate(50,19);
    cout << "Ingrese una opción: " << endl;
    rlutil::locate(70,19);
    cin >> opcion;
    return opcion;
}

void App::MenuBienvenida(){
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(40,10);
    cout << "¡ BIENVENIDO A";
    rlutil::setColor(rlutil::RED);
    cout << " C";
    rlutil::setColor(rlutil::WHITE);
    cout << "ARD-JITSU";
    rlutil::setColor(rlutil::RED);
    cout << "++";
    rlutil::setColor(rlutil::WHITE);
    cout << " !";
    rlutil::locate(37,12);
    system("pause");
    system("cls");
}
