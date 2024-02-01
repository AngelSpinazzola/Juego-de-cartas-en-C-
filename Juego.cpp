#include "Juego.h"
#include "Jugador.h"
#include <iostream>
#include "rlutil.h"
#include <limits>
#include "CartaDesafio.h"
#include "CartaElementos.h"
using namespace std;

bool mazoCartasElementos[60]={};
bool mazoCartasDesafios[10]={};
bool tomarCartaDesafio = false;
bool jugarCartaElemento = false;
int rondas = 0;

int contadorRondasConsecutivasGanadasJugador = 0;
int contadorRondasConsecutivasGanadasCpu = 0;

void verificarDesafioCumplido(Jugador &obj){
    if (obj.getCartaDesafio() == 0){
        if (obj.getContadorDesafios(0) > 0){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 1){
        if (obj.getContadorDesafios(1) > 0){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 2){
        if (obj.getContadorDesafios(2) > 0){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 3){
        if (obj.getContadorDesafios(3) >= 2){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 4){
        if (obj.getContadorDesafios(4) >= 2){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 5){
        if (obj.getContadorDesafios(5) >= 2){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 6){
        if (obj.getContadorDesafios(6) >= 2){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 7){
        if (obj.getContadorDesafios(7) > 0){
            obj.setDesafios(0);
        }
    }
    else if (obj.getCartaDesafio() == 8){
        if(obj.getContadorDesafios(8) >= 2){
            obj.setDesafios(0);
        }
    }
}

void Iniciar(Jugador &jugador, Jugador &cpu){
    int opcionMenuJuego;
    PedirNombre(jugador);


    asignarTresCartasAlAzar(jugador, mazoCartasElementos);
    asignarTresCartasAlAzar(cpu, mazoCartasElementos);

    do{
        system("cls");
        void verificarDesafioCumplido(Jugador &jugador);
        void verificarDesafioCumplido(Jugador &cpu);



        opcionMenuJuego = MostrarMenuJuego(jugador);

        switch (opcionMenuJuego){
        case 1:
            {
                bool desafioUno = jugador.verificarDesafioCumplido();
                if (!tomarCartaDesafio){
                    menuParaLevantarCartaDesafio();
                    levantarCartaDesafio(jugador, mazoCartasDesafios);
                    //
                    mensajeCartaObtenida(jugador);
                    //
                    levantarCartaDesafio(cpu, mazoCartasDesafios);
                    tomarCartaDesafio = true;
                }
                else if (desafioUno == false){
                    int carta = jugador.getCartaDesafio();
                    verCartaDesafio(carta);
                }
                else{
                    cout << "USTED CUMPLIO EL DESAFIO DE SU CARTA DESAFIO";
                }
            }
            break;
        case 2:
            verCartasElementos(jugador);
            break;

        case 3:
            if (jugarCartaElemento == false){
                int cartaJugadorObtenida = robarCartaElemento(jugador, mazoCartasElementos);
                dibujarCartaElemento(cartaJugadorObtenida);
                robarCartaElemento(cpu, mazoCartasElementos);
                jugarCartaElemento = true;

            }else{
                rondas++;
                int cartaElementoJugador = mostrarMazoElementos(jugador, rondas);
                int cartaElementoCpu = otorgarCartaElementoCpu(cpu);
                int suceso; // SI ES 1 GANO EL JUGADOR, SI ES 0 GANO EL CPU, SI ES 2 HUBO EMPATE.
                suceso = empezarRonda(jugador, cpu, rondas, cartaElementoJugador, cartaElementoCpu);
                rlutil::locate(38,26);
                system("pause");
                if (suceso == 2){
                    jugarCartaElemento = true; // VUELVEN A TIRAR LAS CARTAS
                    break;
                }
                if (suceso == 1){
                    jugarCartaElemento = false; // GANO EL JUGADOR
                    //PASAR LA CARTA ELEMENTO DEL CPU AL JUGADOR
                    contadorRondasConsecutivasGanadasJugador++;

                    cpu.QuitarCartaElemento(cartaElementoCpu);
                    jugador.AgregarCartaElemento(cartaElementoCpu);

                    if (contadorRondasConsecutivasGanadasJugador == 2){
                        if (jugador.getCartaDesafio() == 9){
                            jugador.setDesafios(0);
                        }
                    }

                    if (contadorRondasConsecutivasGanadasCpu >= 0){
                        contadorRondasConsecutivasGanadasCpu--;
                    }

                }
                if (suceso == 0){
                    contadorRondasConsecutivasGanadasCpu++;

                    jugarCartaElemento = false; // GANO EL CPU
                    cpu.AgregarCartaElemento(cartaElementoJugador);
                    jugador.QuitarCartaElemento(cartaElementoJugador);

                    if (contadorRondasConsecutivasGanadasJugador >= 0){
                        contadorRondasConsecutivasGanadasJugador--;
                    }

                    if (contadorRondasConsecutivasGanadasCpu == 2){
                        if (cpu.getCartaDesafio() == 9){
                            cpu.setDesafios(0);
                        }
                    }
                }
            }
        break;
        }


    }while(opcionMenuJuego);

    cout << "FIN DEL JUEGO" << endl;
    system("pause");
    system("cls");

}

int empezarRonda(Jugador &jugador, Jugador &cpu, int rondas, int cartaElementoJugador, int cartaElementoCpu){
    system("cls");
    rlutil::locate(50,4);
    rlutil::setColor(rlutil::RED);
    cout << " C";
    rlutil::setColor(rlutil::WHITE);
    cout << "ARD-JITSU";
    rlutil::setColor(rlutil::RED);
    cout << "++";
    rlutil::locate(15,5);
    cout << "*----------------------------------------------------------------------------------------*";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(16,6);
    cout << jugador.getNombre() << " VS CPU" << endl;
    rlutil::locate(95,6);
    cout << "RONDA #" << rondas;

    //fix

    rlutil::locate(22,8);
    cout << jugador.getNombre() << " JUEGA";
    dibujarNaipeElemento(cartaElementoJugador, 22, 12);
    //mostrarCartaElegida(jugador, cartaElementoJugador);

    rlutil::locate(79,8);
    cout << cpu.getNombre() << " JUEGA";
    dibujarNaipeElemento(cartaElementoCpu, 79, 12);
    //mostrarCartaElegida(cpu, cartaElementoCpu);

    //fix


    int suceso = determinarQuienGanoRonda(jugador, cpu, cartaElementoJugador, cartaElementoCpu); // SI ES 1 GANO EL JUGADOR, SI ES 0 GANO EL CPU, SI ES 2 HUBO EMPATE.
    return suceso;
    //rlutil::locate(16,30);
    //system("pause");
}

int MostrarMenuJuego(Jugador &jugador){
    int opcion;
    rlutil::locate(50,4);
    rlutil::setColor(rlutil::RED);
    cout << " C";
    rlutil::setColor(rlutil::WHITE);
    cout << "ARD-JITSU";
    rlutil::setColor(rlutil::RED);
    cout << "++";
    rlutil::locate(15,5);
    cout << "*----------------------------------------------------------------------------------------*";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(16,6);
    cout << jugador.getNombre() << " VS CPU" << endl;
    rlutil::locate(95,6);
    cout << "RONDA #" << rondas;
    if(jugador.getCartaDesafio() == -1){
        rlutil::locate(16,8);
        cout << "[1] - LEVANTAR CARTA DESAFIO ";
    }else{
        rlutil::locate(16,8);
        cout << "[1] - VER CARTA DESAFÍO ";
    }
    rlutil::locate(16,9);
    cout << "[2] - VER CARTAS DE ELEMENTOS ";

    if (jugarCartaElemento == false){
        rlutil::locate(16,10);
        cout << "[3] - ROBAR CARTA ELEMENTO DE LA PILA ";
    }else{
        rlutil::locate(16,10);
        cout << "[3] - JUGAR UNA CARTA ";
    }

    rlutil::locate(16,12);
    cout << "OPCIÓN? (1-3): ";
    rlutil::locate(31,12);
    cin >> opcion;

    return opcion;

}



void PedirNombre(Jugador &jugador){
    system("cls");
    char nombre[50];
    rlutil::locate(50,4);
    rlutil::setColor(rlutil::RED);
    cout << " C";
    rlutil::setColor(rlutil::WHITE);
    cout << "ARD-JITSU";
    rlutil::setColor(rlutil::RED);
    cout << "++";
    rlutil::locate(15,5);
    cout << "*----------------------------------------------------------------------------------------*";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(48,11);
    cout << "Ingrese su nombre";
    rlutil::locate(53,13);
    rlutil::hidecursor();
    cargarCadena(nombre, 49);
    jugador.setNombre(nombre);
    rlutil::showcursor();
    system("cls");
}
