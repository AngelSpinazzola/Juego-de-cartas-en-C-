#include "CartaElementos.h"
#include "rlutil.h"
#include <ctime>
#include <iomanip>

void asignarTresCartasAlAzar(Jugador &obj, bool mazoCartasElementos[]){
    int carta, repartida = 0;
    srand(time(NULL));
    while (repartida != 3){
        carta = (rand()%60);
        if(obj.getCartaElemento(carta) == false && mazoCartasElementos[carta] == false){
            obj.setCartaElemento(carta);
            mazoCartasElementos[carta] = true;
            repartida++;
        }
    }
}


void verCartasElementos(Jugador &jugador){
    string elementos[] = {"FUEGO", "NIEVE", "AGUA"};
    string colores[] = {"ROJO", "AMARILLO", "VERDE", "AZUL"};

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

    int columna = 15;
    int fila = 8;
    int contCartas = 0;
    for (int carta = 0; carta < 60; carta++)
    {
        if (jugador.getCartaElemento(carta))
        {
            int tipo_carta = carta / 20;
            int numero = ((carta % 20) % 5) + 1;

            string elemento = elementos[tipo_carta];
            string color = colores[(carta % 20) / 5];

            dibujarNaipeElemento(carta, columna, fila);
            columna+=9;

            contCartas++;
        }
        if ( contCartas == 10){
            columna = 15;
            fila = 14;
        }
        if ( contCartas == 20){
            columna = 15;
            fila = 20;
        }
        if ( contCartas == 30){
            columna = 15;
            fila = 27;
        }
        if ( contCartas == 40){
            columna = 15;
            fila = 34;
        }
        if ( contCartas == 50){
            columna = 15;
            fila = 41;
        }
    }

    fila+=9;
    rlutil::locate(16,fila);
    cout <<"PRESIONE UNA TECLA PARA VOLVER...";
    getch();
    system("cls");
}
/*
void mostrarCartaElementoLevantada(int carta);
    for (int i = 0; i < 60; i++) {
        if (jugador.getCartaElemento(i) == true){
            dibujarCartaElemento(i);
        }
    }
}
*/
//TEST FUNCION DIBUJAR NAIPE
void dibujarNaipeElemento(int carta, int x, int fila){
    int tipoCarta = carta / 20; // 0 ES FUEGO - 1 ES NIEVE - 2 ES AGUA
    int numeroCarta = ((carta % 20) % 5) + 1; // LIMPIA LA CARTA PARA OBTENER EL NUMERO DEL NAIPE REAL ( 1,2,3,4,5)
    string elementos[] = {"F", "N", "A"};



    rlutil::locate(x+1, fila+1);
    cout << "+------+";
    rlutil::locate(x+1, fila+2);
    cout << "|      |";
    rlutil::locate(x+1, fila+3);
    cout << "|  ";
    //EVALUA CADA CASO PARA PINTAR EL INTERIOR DE NAIPE
    if ( (carta >= 0 && carta <= 4) || (carta >= 20 && carta <= 24) || (carta >= 40 && carta <= 44) ){
        rlutil::setColor(rlutil::RED);
        cout << numeroCarta << elementos[tipoCarta];
        rlutil::setColor(rlutil::GREY);
        cout << "  |";
    }
    if ( (carta >= 5 && carta <= 9) || (carta >= 25 && carta <= 29) || (carta >= 45 && carta <= 49) ){
        rlutil::setColor(rlutil::YELLOW);
        cout << numeroCarta << elementos[tipoCarta];
        rlutil::setColor(rlutil::GREY);
        cout << "  |";
    }
    if ( (carta >= 10 && carta <= 14) || (carta >= 30 && carta <= 34) || (carta >= 50 && carta <= 54) ){
        rlutil::setColor(rlutil::GREEN);
        cout << numeroCarta << elementos[tipoCarta];
        rlutil::setColor(rlutil::GREY);
        cout << "  |";
    }
    if ( (carta >= 15 && carta <= 19) || (carta >= 35 && carta <= 39) || (carta >= 55 && carta <= 59) ){
        rlutil::setColor(rlutil::BLUE);
        cout << numeroCarta << elementos[tipoCarta];
        rlutil::setColor(rlutil::GREY);
        cout << "  |";
    }





    rlutil::setColor(rlutil::GREY);
    rlutil::locate(x+1, fila+4);
    cout << "|      |";
    rlutil::locate(x+1, fila+5);
    cout << "+------+";

    /*

    rlutil::locate(x+1, fila+1);
    cout << "+------+";
    rlutil::locate(x+1, fila+2);
    cout << "|      |";
    rlutil::locate(x+1, fila+3);
    cout << "|  " << numeroCarta << elementos[tipoCarta] << "  |";
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(x+1, fila+4);
    cout << "|      |";
    rlutil::locate(x+1, fila+5);
    cout << "+------+";

    */
}
//TEST FUNCION DIBUJAR NAIPE


void dibujarCartaElemento(int indice){
    string elementos[] = {"FUEGO", "NIEVE", "AGUA"};
    string colores[] = {"ROJO", "AMARILLO", "VERDE", "AZUL"};

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



    int tipo_carta = indice / 20;
    int numero = ((indice % 20) % 5) + 1;

    string elemento = elementos[tipo_carta];
    string color = colores[(indice % 20) / 5];

    // Mostrar la carta
    rlutil::locate(48, 8);
    cout << "¡ CARTA OBTENIDA !";
    dibujarNaipeElemento(indice, 52, 10);
    //
    rlutil::locate(49,18);
    cout << elemento << " #" << numero << " " << color << endl;
    rlutil::locate(43,22);
    cout <<"PRESIONE UNA TECLA PARA VOLVER...";
    getch();
    system("cls");



}

int robarCartaElemento(Jugador &obj, bool mazoCartasElementos[]){
    int carta, repartida = 0;
    srand(time(NULL));
    while (repartida != 1){
        carta = (rand()%60);
        if(obj.getCartaElemento(carta) == false && mazoCartasElementos[carta] == false){
            obj.setCartaElemento(carta);
            mazoCartasElementos[carta] = true;
            repartida++;
            return carta;
        }
    }
}

int otorgarCartaElementoCpu(Jugador &cpu){
    srand(time(NULL));
    int repartida = 0;
    while (repartida != 1){
        int carta = (rand()%60);
        if(cpu.getCartaElemento(carta)){
            repartida++;
            return carta;
        }
    }
}

int mostrarMazoElementos(Jugador &jugador, int rondas){
    string elementos[] = {"FUEGO", "NIEVE", "AGUA"};
    string colores[] = {"ROJO", "AMARILLO", "VERDE", "AZUL"};

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
    cout << jugador.getNombre() << " VS CPU";
    rlutil::locate(95,6);
    cout << "RONDA #" << rondas;

    int columna = 15;
    int fila = 8;
    int contCartas = 0;
    for (int carta = 0; carta < 60; carta++)
    {
        if (jugador.getCartaElemento(carta))
        {
            int tipo_carta = carta / 20;
            int numero = ((carta % 20) % 5) + 1;

            string elemento = elementos[tipo_carta];
            string color = colores[(carta % 20) / 5];

            dibujarNaipeElemento(carta, columna, fila);
            columna+=9;

            contCartas++;
        }
        if ( contCartas == 10){
            columna = 15;
            fila = 14;
        }
        if ( contCartas == 20){
            columna = 15;
            fila = 20;
        }
        if ( contCartas == 30){
            columna = 15;
            fila = 27;
        }
        if ( contCartas == 40){
            columna = 15;
            fila = 34;
        }
        if ( contCartas == 50){
            columna = 15;
            fila = 41;
        }
    }

    fila+=9;
    for (int l=0; l<60; l++){
        if (jugador.getCartaElemento(l)){
            if(l < 10){
                fila++;
                rlutil::locate(16, fila);
                cout << "OPCIÓN "  << l << "  : ";
                cartaElementoDibujar(l);
            }
            else{
                fila++;
                rlutil::locate(16, fila);
                cout << "OPCIÓN "  << l << " : ";
                cartaElementoDibujar(l);
            }
        }
    }
    //
    rlutil::locate(16, fila+2);
    int opcion;
    cout << "INGRESE UNA CARTA DESEADA: ";
    cin >> opcion;
    if (opcion >= 0 && opcion <= 59 && jugador.getCartaElemento(opcion) == true){
        pantallaCarga();
        system("cls");
        return opcion;
    }

    do{
        rlutil::locate(16, fila+4);
        cout << "DEBE INGRESAR UNA OPCION DISPONIBLE, INTENTE NUEVAMENTE";
        rlutil::locate(16, fila+6);
        cout << "INGRESE UNA CARTA DESEADA: ";
        cin >> opcion;
        if (opcion >= 0 && opcion <= 59 && jugador.getCartaElemento(opcion) == true){
            pantallaCarga();
            system("cls");
            return opcion;
        }

    }while(true);
}

//TEST PANTALLA CARGA
void pantallaCarga(){
    rlutil::cls();

    for (int i=0; i<1; i++){
        rlutil::locate(42,7);
        cout << "+------------------+";
        rlutil::locate(42,8);
        cout << "|  5F              |";
        rlutil::locate(42,9);
        cout << "|                  |";
        rlutil::locate(42,10);
        cout << "|                  |";
        rlutil::locate(42,11);
        cout << "|                  |";
        rlutil::locate(42,12);
        cout << "|                  |";
        rlutil::locate(42,13);
        cout << "|                  |";
        rlutil::locate(42,14);
        cout << "|                  |";
        rlutil::locate(42,15);
        cout << "|                  |";
        rlutil::locate(42,16);
        cout << "|                  |";
        rlutil::locate(42,17);
        cout << "|                  |";
        rlutil::locate(42,18);
        cout << "|                  |";
        rlutil::locate(42,19);
        cout << "|                  |";
        rlutil::locate(42,20);
        cout << "|               5F |";
        rlutil::locate(42,21);
        cout << "+------------------+";

        rlutil::locate(42,24);
        cout << "CARGANDO.";

        rlutil::msleep(250);
        system("cls");

        rlutil::locate(42,7);
        cout << "+------------------+";
        rlutil::locate(42,8);
        cout << " | 5F              |";
        rlutil::locate(42,9);
        cout << "  |                |";
        rlutil::locate(42,10);
        cout << "   |               |";
        rlutil::locate(42,11);
        cout << "    |              |";
        rlutil::locate(42,12);
        cout << "     |             |";
        rlutil::locate(42,13);
        cout << "      |            |";
        rlutil::locate(42,14);
        cout << "       |           |";
        rlutil::locate(42,15);
        cout << "        |          |";
        rlutil::locate(42,16);
        cout << "         |         |";
        rlutil::locate(42,17);
        cout << "          |        |";
        rlutil::locate(42,18);
        cout << "           |       |";
        rlutil::locate(42,19);
        cout << "            |      |";
        rlutil::locate(42,20);
        cout << "             |  5F |";
        rlutil::locate(42,21);
        cout << "              -----+";

        rlutil::locate(42,24);
        cout << "CARGANDO..";

        rlutil::msleep(250);
        system("cls");

        rlutil::locate(42,7);
        cout << "           +--------+";
        rlutil::locate(42,8);
        cout << "            |       |";
        rlutil::locate(42,9);
        cout << "             |      |";
        rlutil::locate(42,10);
        cout << "              |     |";
        rlutil::locate(42,11);
        cout << "               |    |";
        rlutil::locate(42,12);
        cout << "                |   |";
        rlutil::locate(42,13);
        cout << "                 |  |";
        rlutil::locate(42,14);
        cout << "                  | |";
        rlutil::locate(42,15);
        cout << "                   ||";
        rlutil::locate(42,16);
        cout << "                    ";
        rlutil::locate(42,17);
        cout << "                    ";
        rlutil::locate(42,18);
        cout << "                    ";
        rlutil::locate(42,19);
        cout << "                    ";
        rlutil::locate(42,20);
        cout << "                    ";
        rlutil::locate(42,21);
        cout << "                    ";

        rlutil::locate(42,24);
        cout << "CARGANDO...";

        rlutil::msleep(250);
        system("cls");

        rlutil::locate(42,7);
        cout << "+------------------+";
        rlutil::locate(42,8);
        cout << " | 4N              |";
        rlutil::locate(42,9);
        cout << "  |                |";
        rlutil::locate(42,10);
        cout << "   |               |";
        rlutil::locate(42,11);
        cout << "    |              |";
        rlutil::locate(42,12);
        cout << "     |             |";
        rlutil::locate(42,13);
        cout << "      |            |";
        rlutil::locate(42,14);
        cout << "       |           |";
        rlutil::locate(42,15);
        cout << "        |          |";
        rlutil::locate(42,16);
        cout << "         |         |";
        rlutil::locate(42,17);
        cout << "          |        |";
        rlutil::locate(42,18);
        cout << "           |       |";
        rlutil::locate(42,19);
        cout << "            |      |";
        rlutil::locate(42,20);
        cout << "             |  4N |";
        rlutil::locate(42,21);
        cout << "              -----+";

        rlutil::locate(42,24);
        cout << "CARGANDO..";

        rlutil::msleep(250);
        system("cls");


        rlutil::locate(42,7);
        cout << "+------------------+";
        rlutil::locate(42,8);
        cout << "|  4N              |";
        rlutil::locate(42,9);
        cout << "|                  |";
        rlutil::locate(42,10);
        cout << "|                  |";
        rlutil::locate(42,11);
        cout << "|                  |";
        rlutil::locate(42,12);
        cout << "|                  |";
        rlutil::locate(42,13);
        cout << "|                  |";
        rlutil::locate(42,14);
        cout << "|                  |";
        rlutil::locate(42,15);
        cout << "|                  |";
        rlutil::locate(42,16);
        cout << "|                  |";
        rlutil::locate(42,17);
        cout << "|                  |";
        rlutil::locate(42,18);
        cout << "|                  |";
        rlutil::locate(42,19);
        cout << "|                  |";
        rlutil::locate(42,20);
        cout << "|               4N |";
        rlutil::locate(42,21);
        cout << "+------------------+";

        rlutil::locate(42,24);
        cout << "CARGANDO.";

        rlutil::msleep(250);
        system("cls");
    }
}

void cartaElementoDibujar(int carta){
    string elementos[] = {"FUEGO", "NIEVE", "AGUA"};
    string colores[] = {"ROJO", "AMARILLO", "VERDE", "AZUL"};

    int tipo_carta = carta / 20;
    int numero = ((carta % 20) % 5) + 1;

    string elemento = elementos[tipo_carta];
    string color = colores[(carta % 20) / 5];
    int numColor = (carta % 20) / 5;

    // Mostrar la carta
    switch(numColor){
    case 0:
        rlutil::setColor(rlutil::RED);
        cout << elemento << " #" << numero << endl;
    break;
    case 1:
        rlutil::setColor(rlutil::YELLOW);
        cout << elemento << " #" << numero << endl;
    break;
    case 2:
        rlutil::setColor(rlutil::GREEN);
        cout << elemento << " #" << numero << endl;
    break;
    case 3:
        rlutil::setColor(rlutil::BLUE);
        cout << elemento << " #" << numero << endl;
    break;
    }
    rlutil::setColor(rlutil::GREY);
}

void mostrarCartaElegida(Jugador &obj, int carta){
    cout << obj.getNombre() << " JUEGA ";
    cartaElementoDibujar(carta);
    //
}




int determinarQuienGanoRonda(Jugador &jugador, Jugador &cpu, int cartaElementoJugador, int cartaElementoCpu){
    int tipoCartaJugador = cartaElementoJugador / 20; // 0 ES FUEGO - 1 ES NIEVE - 2 ES AGUA
    int numeroCartaJugador = ((cartaElementoJugador % 20) % 5) + 1;

    int tipoCartaCpu = cartaElementoCpu / 20;
    int numeroCartaCpu = ((cartaElementoCpu % 20) % 5) + 1;

    string elementos[] = {"FUEGO", "NIEVE", "AGUA"};
    string colores[] = {"ROJO", "AMARILLO", "VERDE", "AZUL"};



    int colorCartaJugador = (cartaElementoJugador % 20) / 5; // 0 ROJO - 1 AMARILLO - 2 VERDE - 4 AZUL
    int colorCartaCpu = (cartaElementoCpu % 20) / 5;

    /*
        El fuego vence a la nieve
        La nieve vence al agua
        El agua vence al fuego
    */

    if (tipoCartaJugador == tipoCartaCpu){
        if (numeroCartaJugador > numeroCartaCpu){
            rlutil::locate(43,21);
            cout << jugador.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoCpu);
            rlutil::locate(43,22);
            cout << "POR QUE ";
            rlutil::locate(51,22);
            cartaElementoDibujar(cartaElementoJugador);
            rlutil::locate(43,23);
            cout << "ES MAYOR A ";
            cartaElementoDibujar(cartaElementoCpu);
            jugador.setContadorDesafios(7); // CASO 8 - GANAR UNA CARTA CON EL MISMO ELEMENTO QUE EL ADVERSARIO
            jugador.setContadorDesafios(colorCartaCpu+3);
            return 1; //GANO EL JUGADOR
            // SI LA CARTA FUE DE FUEGO, SE ENVIA 0 + 3 POR PARAMETRO, QUE UBICA UN ++ EN EL VECTOR DE DESAFIOS
        }
        else if(numeroCartaCpu > numeroCartaJugador){
            rlutil::locate(43,21);
            cout << cpu.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoJugador);
            rlutil::locate(43,22);
            cout << "POR QUE ";
            rlutil::locate(51,22);
            cartaElementoDibujar(cartaElementoCpu);
            rlutil::locate(43,23);
            cout << "ES MAYOR A ";
            cartaElementoDibujar(cartaElementoJugador);
            cpu.setContadorDesafios(7); // CASO 8 - GANAR UNA CARTA CON EL MISMO ELEMENTO QUE EL ADVERSARIO
            cpu.setContadorDesafios(colorCartaJugador+3);

            return 0; //GANO EL CPU
        }
        rlutil::locate(28, 21);
        cout << "EMPATE, TIENEN LA CARTA DEL MISMO ELEMENTO Y MISMO NUMERO, VUELVAN A TIRAR UNA CARTA . . .";
        return 2; // EMPATE
    }
    else{
        //CASO DE VICTORIA PARA EL JUGADOR
        if(tipoCartaJugador == 0 && tipoCartaCpu == 1){
            rlutil::locate(43,21);
            cout << jugador.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoCpu);
            rlutil::locate(43,22);
            cout << "POR QUE FUEGO VENCE A LA NIEVE";
            /*
                AGREGA 1 VALOR AL VECTOR DESAFIOS
                PARA LUEGO COMPARAR CON SU CARTA DESAFIO Y VER SI LO CUMPLE
                SE LE PASA POR PARAMETROS LA POSICION DEL VECTOR
                EJEMPLO:
                        1 - Ganar una carta de Nieve
                        TENDRIA QUE RECIBIR 0, YA QUE ES EL PRIMER DESAFIO.
            */
            jugador.setContadorDesafios(0); // CASO 0  - GANAR UNA CARTA NIEVE
            jugador.setContadorDesafios(colorCartaCpu+3);
            if (numeroCartaJugador == numeroCartaCpu){
                jugador.setContadorDesafios(8);
            }
            return 1;
        }
        if(tipoCartaJugador == 1 && tipoCartaCpu == 2){
            rlutil::locate(43,21);
            cout << jugador.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoCpu);
            rlutil::locate(43,22);
            cout << "POR QUE NIEVE VENCE AL AGUA";
            jugador.setContadorDesafios(2); // CASO 3 - GANAR UNA CARTA AGUA
            jugador.setContadorDesafios(colorCartaCpu+3);
            if (numeroCartaJugador == numeroCartaCpu){
                jugador.setContadorDesafios(8);
            }
            return 1;
        }
        if(tipoCartaJugador == 2 && tipoCartaCpu == 0){
            rlutil::locate(43,21);
            cout << jugador.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoCpu);
            rlutil::locate(43,22);
            cout << "POR QUE AGUA VENCE AL FUEGO";
            //CASO 2
            jugador.setContadorDesafios(1); // CASO 2 - GANAR UNA CARTA FUEGO
            jugador.setContadorDesafios(colorCartaCpu+3);
            if (numeroCartaJugador == numeroCartaCpu){
                jugador.setContadorDesafios(8);
            }
            return 1;
        }

        //CASO DE VICTORIA PARA EL CPU
        if(tipoCartaCpu == 0 && tipoCartaJugador == 1){
            rlutil::locate(43,21);
            cout << cpu.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoJugador);
            rlutil::locate(43,22);
            cout << "POR QUE FUEGO VENCE A LA NIEVE";
            cpu.setContadorDesafios(0); // CASO 0  - GANAR UNA CARTA NIEVE
            cpu.setContadorDesafios(colorCartaJugador+3);
            if (numeroCartaJugador == numeroCartaCpu){
                cpu.setContadorDesafios(8);
            }
            return 0;
        }
        if(tipoCartaCpu == 1 && tipoCartaJugador == 2){
            rlutil::locate(43,21);
            cout << cpu.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoJugador);
            rlutil::locate(43,22);
            cout << "POR QUE NIEVE VENCE AL AGUA";
            cpu.setContadorDesafios(2); // CASO 0  - GANAR UNA CARTA AGUA
            cpu.setContadorDesafios(colorCartaJugador+3);
            if (numeroCartaJugador == numeroCartaCpu){
                cpu.setContadorDesafios(8);
            }
            return 0;
        }
        if(tipoCartaCpu == 2 && tipoCartaJugador == 0){
            rlutil::locate(43,21);
            cout << cpu.getNombre() << " GANA ";
            cartaElementoDibujar(cartaElementoJugador);
            rlutil::locate(43,22);
            cout << "POR QUE AGUA VENCE AL FUEGO";
            cpu.setContadorDesafios(1); // CASO 0  - GANAR UNA CARTA FUEGO
            cpu.setContadorDesafios(colorCartaJugador+3);
            if (numeroCartaJugador == numeroCartaCpu){
                cpu.setContadorDesafios(8);
            }
            return 0;
        }

    }
}



