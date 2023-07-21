#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "rlutil.h"
using namespace std;
#include "funciones.h"

void pedir_nombre(string &jugador)
{
    cin.ignore();
    rlutil::locate(37,10);
    cout << "Ingrese el nombre del jugador" << endl;
    rlutil::locate(49,11);
    getline(cin, jugador);
}
void mostrar_menu_principal()
{
    rlutil::locate(37,10);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(30,11);
    rlutil::setColor(rlutil::RED);
    cout << "*------------------------------*" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(37,12);
    cout << "1 - JUGAR" << endl;
    rlutil::locate(37,13);
    cout << "2 - ESTADISTICAS" << endl;
    rlutil::locate(37,14);
    cout << "3 - CREDITOS" << endl;
    rlutil::locate(37,15);
    cout << "4 - REGLAS DEL JUEGO" << endl;
    rlutil::locate(30,16);
    rlutil::setColor(rlutil::RED);
    cout << "*------------------------------*" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(37,17);
    cout << "0 - SALIR" << endl;
    rlutil::locate(37,18);
    cout << "OPCIÓN? " << endl;

}
void mostrar_opciones(string jugador, string cpu, bool robar_carta, int ronda)
{
    rlutil::locate(60,10);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(36,11);
    rlutil::setColor(rlutil::RED);
    cout << "*-------------------------------------------------------------*" << endl;
    rlutil::locate(37,12);
    rlutil::setColor(rlutil::WHITE);
    cout << jugador << " VS " << cpu << "                                       RONDA #" << ronda << endl << endl;
    rlutil::locate(37,13);
    cout << "[1] - VER CARTA DESAFiO" << endl;
    rlutil::locate(37,14);
    cout << "[2] - VER CARTAS DE ELEMENTOS" << endl;
    if(robar_carta==false)
    {
        rlutil::locate(37,15);
        cout << "[3] - ROBAR CARTA ELEMENTO DE LA PILA" << endl << endl;
    }
    else
    {
        rlutil::locate(37,15);
        cout << "[3] - JUGAR UNA CARTA" << endl << endl;
    }

    rlutil::locate(37,16);
    cout << "OPCION? (1-3):";
    cout << endl;
}
void ver_carta_desafio(int carta_desafio_jugador)
{
    system("cls");
    switch(carta_desafio_jugador)
    {
    case 1:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 1           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar una   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Carta de    |"<<endl;
        rlutil::locate(45,13);
        cout << "| Nieve.      |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           1 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 2:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 2           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar una   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Carta de    |"<<endl;
        rlutil::locate(45,13);
        cout << "| Fuego.      |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           2 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 3:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 3           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar una   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Carta de    |"<<endl;
        rlutil::locate(45,13);
        cout << "| Agua.       |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           3 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 4:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 4           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Cartas de   |"<<endl;
        rlutil::locate(45,13);
        cout << "| Rojas.      |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           4 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 5:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 5           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Cartas de   |"<<endl;
        rlutil::locate(45,13);
        cout << "| Amarillas.  |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|           5 |"<<endl;
        rlutil::locate(45,16);
        cout << "+-------------+"<<endl;
        break;
    case 6:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 6           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Cartas de   |"<<endl;
        rlutil::locate(45,13);
        cout << "| Verdes.     |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           6 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 7:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 7           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Carta de    |"<<endl;
        rlutil::locate(45,13);
        cout << "| Azules.     |"<<endl;
        rlutil::locate(45,14);
        cout << "|             |"<<endl;
        rlutil::locate(45,15);
        cout << "|           7 |"<<endl;
        rlutil::locate(45,16);
        cout << "+-------------+"<<endl;
        break;
    case 8:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 8           |"<<endl;
        rlutil::locate(45,10);
        cout << "| Ganar una   |"<<endl;
        rlutil::locate(45,11);
        cout << "| Carta con   |"<<endl;
        rlutil::locate(45,12);
        cout << "| El mismo    |"<<endl;
        rlutil::locate(45,13);
        cout << "| Elemento    |"<<endl;
        rlutil::locate(45,14);
        cout << "| Que el      |"<<endl;
        rlutil::locate(45,15);
        cout << "| Adversario. |"<<endl;
        rlutil::locate(45,16);
        cout << "|           8 |"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+"<<endl;
        break;
    case 9:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 9           |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Cartas con  |"<<endl;
        rlutil::locate(45,13);
        cout << "| El mismo    |"<<endl;
        rlutil::locate(45,14);
        cout << "| Numero.     |"<<endl;
        rlutil::locate(45,15);
        cout << "|           9 |"<<endl;
        rlutil::locate(45,16);
        cout << "+-------------+"<<endl;
        break;
    case 10:
        rlutil::locate(45,8);
        cout << "+-------------+"<<endl;
        rlutil::locate(45,9);
        cout << "| 10          |"<<endl;
        rlutil::locate(45,10);
        cout << "|             |"<<endl;
        rlutil::locate(45,11);
        cout << "| Ganar dos   |"<<endl;
        rlutil::locate(45,12);
        cout << "| Rondas de   |"<<endl;
        rlutil::locate(45,13);
        cout << "| Manera      |"<<endl;
        rlutil::locate(45,14);
        cout << "| Consecutiva.|"<<endl;
        rlutil::locate(45,15);
        cout << "|             |"<<endl;
        rlutil::locate(45,16);
        cout << "|           10|"<<endl;
        rlutil::locate(45,17);
        cout << "+-------------+ "<<endl;
        break;
    }
    rlutil::locate(38,19);
    cout << " PRESIONE UNA TECLA PARA VOLVER...";
    getch();
    system("cls");
}
void ver_cartas_de_elementos(bool cartas_elementos_jugador[], string jugador, string CPU, int ronda)
{
    cout << " CARD-JITSU++ " << endl << " -----------------------------------------------------------------" << endl;
    cout << " " << jugador << " VS " << CPU << "                                                RONDA #" << ronda << endl << endl;

    int carta;
    for(carta=0; carta<60; carta++)
    {
        if(cartas_elementos_jugador[carta]==true)
        {
            if(carta >= 0 && carta <= 19)
            {
                cout << " FUEGO ";
                if(carta >= 0 && carta <= 4)
                {
                    cout << "#" << carta+1;
                    rlutil::setColor(rlutil::RED);
                    cout  << " ROJO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 5 && carta <= 9)
                {
                    cout << "#" << carta-4;
                    rlutil::setColor(rlutil::YELLOW);
                    cout  << " AMARILLO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 10 && carta <= 14)
                {
                    cout << "#" << carta-9;
                    rlutil::setColor(rlutil::GREEN);
                    cout  << " VERDE ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 15 && carta <= 19)
                {
                    cout << "#" << carta-14;
                    rlutil::setColor(rlutil::BLUE);
                    cout  << " AZUL ";
                    rlutil::setColor(rlutil::WHITE);
                }
                cout << endl;

            }
            if(carta >= 20 && carta <= 39)
            {
                cout << " NIEVE ";
                if(carta >= 20 && carta <= 24)
                {
                    cout << "#" << carta-19;
                    rlutil::setColor(rlutil::RED);
                    cout  << " ROJO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 25 && carta <= 29)
                {
                    cout << "#" << carta-24;
                    rlutil::setColor(rlutil::YELLOW);
                    cout  << " AMARILLO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 30 && carta <= 34)
                {
                    cout << "#" << carta-29;
                    rlutil::setColor(rlutil::GREEN);
                    cout  << " VERDE ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 35 && carta <= 39)
                {
                    cout << "#" << carta-34;
                    rlutil::setColor(rlutil::BLUE);
                    cout  << " AZUL ";
                    rlutil::setColor(rlutil::WHITE);
                }
                cout << endl;
            }
            if(carta >= 40 && carta <= 59)
            {
                cout << " AGUA ";
                if(carta >= 40 && carta <= 44)
                {
                    cout << "#" << carta-39;
                    rlutil::setColor(rlutil::RED);
                    cout  << " ROJO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 45 && carta <= 49)
                {
                    cout << "#" << carta-44;
                    rlutil::setColor(rlutil::YELLOW);
                    cout  << " AMARILLO ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 50 && carta <= 54)
                {
                    cout << "#" << carta-49;
                    rlutil::setColor(rlutil::GREEN);
                    cout  << " VERDE ";
                    rlutil::setColor(rlutil::WHITE);
                }
                if(carta >= 55 && carta <= 59)
                {
                    cout << "#" << carta-54;
                    rlutil::setColor(rlutil::BLUE);
                    cout  << " AZUL ";
                    rlutil::setColor(rlutil::WHITE);
                }
                cout << endl;
            }
        }
    }
    cout << endl << " PRESIONE UNA TECLA PARA VOLVER...";
    getch();
    system("cls");
}
void asignar_cartas_elementos(bool comprobar_cartas_elementos[], bool cartas_elementos_jugador[])
{
    int carta, repartida=0;
    while(repartida != 3)
    {
        carta = (rand() % 60);
        if(comprobar_cartas_elementos[carta] == false)
        {
            comprobar_cartas_elementos[carta]=true;
            cartas_elementos_jugador[carta]=true;
            repartida++;
        }
    }
}
void robar_carta_del_mazo(bool comprobar_cartas_elementos[], bool cartas_elementos_jugador[], bool &robada_carta)
{
    int carta, carta_robada=0;
    while(carta_robada != 1)
    {
        carta = (rand()%60);
        if(comprobar_cartas_elementos[carta] == false)
        {
            comprobar_cartas_elementos[carta]=true;
            cartas_elementos_jugador[carta]=true;
            carta_robada=1;
        }
    }
    mostrar_carta_robada(carta);
    robada_carta=true;
}
void mostrar_carta_robada(int carta)
{
    cout << " ¡ Su carta obtenida fue ! " << endl;
    if(carta >= 0 && carta <= 19)
    {
        cout << " FUEGO ";
        if(carta >= 0 && carta <= 4)
        {
            cout << "#" << carta+1;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 5 && carta <= 9)
        {
            cout << "#" << carta-4;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 10 && carta <= 14)
        {
            cout << "#" << carta-9;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 15 && carta <= 19)
        {
            cout << "#" << carta-14;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;

    }
    if(carta >= 20 && carta <= 39)
    {
        cout << " NIEVE ";
        if(carta >= 20 && carta <= 24)
        {
            cout << "#" << carta-19;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 25 && carta <= 29)
        {
            cout << "#" << carta-24;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 30 && carta <= 34)
        {
            cout << "#" << carta-29;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 35 && carta <= 39)
        {
            cout << "#" << carta-34;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;
    }
    if(carta >= 40 && carta <= 59)
    {
        cout << " AGUA ";
        if(carta >= 40 && carta <= 44)
        {
            cout << "#" << carta-39;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 45 && carta <= 49)
        {
            cout << "#" << carta-44;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 50 && carta <= 54)
        {
            cout << "#" << carta-49;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 55 && carta <= 59)
        {
            cout << "#" << carta-54;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;
    }
    cout << endl << " PRESIONE UNA TECLA PARA VOLVER...";
    getch();
    system("cls");
}
void elegir_carta_elemento(bool cartas_elementos_jugador[], string jugador, string cpu, bool &robar_carta, int &carta_a_jugar)
{
    robar_carta=false;
    int carta;
    cout << " Elija la carta que desea a jugar" << endl;
    for(carta=0; carta<60; carta++)
    {
        if(cartas_elementos_jugador[carta]==true)
        {
            cout << " Opción " << carta << " : ", mostrar_carta_para_jugar(carta);
        }
    }
    cout << endl << " Ingrese la opcion: ";
    cin >> carta_a_jugar;
    system("cls");

}
void mostrar_carta_para_jugar(int carta)
{
    carta = carta;
    if(carta >= 0 && carta <= 19)
    {
        cout << " FUEGO ";
        if(carta >= 0 && carta <= 4)
        {
            cout << "#" << carta+1;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 5 && carta <= 9)
        {
            cout << "#" << carta-4;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 10 && carta <= 14)
        {
            cout << "#" << carta-9;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 15 && carta <= 19)
        {
            cout << "#" << carta-14;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;

    }
    if(carta >= 20 && carta <= 39)
    {
        cout << " NIEVE ";
        if(carta >= 20 && carta <= 24)
        {
            cout << "#" << carta-19;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 25 && carta <= 29)
        {
            cout << "#" << carta-24;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 30 && carta <= 34)
        {
            cout << "#" << carta-29;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 35 && carta <= 39)
        {
            cout << "#" << carta-34;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;
    }
    if(carta >= 40 && carta <= 59)
    {
        cout << " AGUA ";
        if(carta >= 40 && carta <= 44)
        {
            cout << "#" << carta-39;
            rlutil::setColor(rlutil::RED);
            cout  << " ROJO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 45 && carta <= 49)
        {
            cout << "#" << carta-44;
            rlutil::setColor(rlutil::YELLOW);
            cout  << " AMARILLO ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 50 && carta <= 54)
        {
            cout << "#" << carta-49;
            rlutil::setColor(rlutil::GREEN);
            cout  << " VERDE ";
            rlutil::setColor(rlutil::WHITE);
        }
        if(carta >= 55 && carta <= 59)
        {
            cout << "#" << carta-54;
            rlutil::setColor(rlutil::BLUE);
            cout  << " AZUL ";
            rlutil::setColor(rlutil::WHITE);
        }
        cout << endl;
    }
}
void comenzar_partida(int &carta_a_jugar, int &carta_cpu, string jugador, string cpu, int &quien_gano, int &carta_desafio_jugador, int &cont_cartas_rojas, int &cont_cartas_amarillas, int &cont_cartas_verdes, int &cont_cartas_azules, int &cont_cartas_iguales, int &cont_rondas_ganadas_consecutivas, int ronda, int &primer_ronda_jugador)
{
    cout << "CARD-JITSU++" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << jugador << " VS " << cpu << "                                                RONDA #" << ronda << endl << endl;
    cout << " " << jugador << " JUEGA ", mostrar_carta_para_jugar(carta_a_jugar);
    cout << " " << cpu << " JUEGA ", mostrar_carta_para_jugar(carta_cpu);
    determinar_quien_gana(carta_a_jugar, carta_cpu, jugador, cpu, quien_gano, carta_desafio_jugador, cont_cartas_rojas, cont_cartas_amarillas, cont_cartas_verdes, cont_cartas_azules, cont_cartas_iguales, cont_rondas_ganadas_consecutivas, primer_ronda_jugador);
}
int generar_carta_para_jugar_cpu(bool cartas_elementos_cpu[])
{
    int carta_cpu;
    bool carta_a_jugar=false;
    while(carta_a_jugar == false)
    {
        carta_cpu = (rand() % 60);
        if(cartas_elementos_cpu[carta_cpu]==true)
        {
            carta_a_jugar=true;
        }
    }
    return carta_cpu;
}
bool determinar_quien_gana(int carta_a_jugar, int carta_cpu, string jugador, string cpu, int &quien_gano, int &carta_desafio_jugador, int &cont_cartas_rojas, int &cont_cartas_amarillas, int &cont_cartas_verdes, int &cont_cartas_azules, int &cont_cartas_iguales, int &cont_rondas_ganadas_consecutivas, int &primer_ronda_jugador)
{
    cout << endl << endl;
    int carta_limpia_jugador;
    int carta_limpia_cpu;

    //Posibilidades al usar carta de fuego
    if(carta_a_jugar >= 0 && carta_a_jugar <= 19)
    {
        if(carta_cpu >= 20 && carta_cpu <= 39)
        {
            //VICTORIA DEL JUGADOR
            cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE FUEGO VENCE A NIEVE" << endl;
            quien_gano = 1;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
            //VERIFICACION DE RONDA
            if(carta_desafio_jugador == 1)
            {
                carta_desafio_jugador = 0;
            }
            // POSIBILIDAD DESAFIO 4
            if(carta_cpu >= 20 && carta_cpu <= 24 && carta_desafio_jugador == 4)
            {
                cont_cartas_rojas++;
                if(cont_cartas_rojas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            // POSIBILIDAD DESAFIO 5
            if(carta_cpu >= 25 && carta_cpu <= 29 && carta_desafio_jugador == 5)
            {
                cont_cartas_amarillas++;
                if(cont_cartas_amarillas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            // POSIBILIDAD DESAFIO 6
            if(carta_cpu >= 30 && carta_cpu <= 34 && carta_desafio_jugador == 6)
            {
                cont_cartas_verdes++;
                if(cont_cartas_verdes == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            // POSIBILIDAD DESAFIO 7
            if(carta_cpu >= 35 && carta_cpu <= 39 && carta_desafio_jugador == 7)
            {
                cont_cartas_azules++;
                if(cont_cartas_azules == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            // POSILIBDAD 9
            if(carta_cpu % 5 == carta_a_jugar % 5 && carta_desafio_jugador == 9)
            {
                cont_cartas_iguales++;
                if(cont_cartas_iguales == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
        }
        else if(carta_cpu >= 40 && carta_cpu <= 59)
        {
            //VICTORIA CPU
            cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE AGUA VENCE A FUEGO" << endl;
            quien_gano = 0;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
        }
        else if(carta_cpu >= 0 && carta_cpu <= 19 )
        {
            carta_limpia_jugador = carta_a_jugar % 5;
            carta_limpia_cpu = carta_cpu % 5;
            if(carta_limpia_jugador == carta_limpia_cpu)
            {
                quien_gano=2;
            }
            if(carta_limpia_jugador > carta_limpia_cpu)
            {
                //VICTORIA DEL JUGADOR
                cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE ", mostrar_carta_para_jugar(carta_a_jugar), cout << " ES MAYOR A ", mostrar_carta_para_jugar(carta_cpu), cout << endl << endl;
                quien_gano = 1;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
                //VERIFICACION DE RONDA
                if(carta_desafio_jugador == 2)
                {
                    carta_desafio_jugador = 0;
                }
                //POSIBILIDAD DESAFIO 4
                if(carta_cpu >= 0 && carta_cpu <= 4 && carta_desafio_jugador == 4)
                {
                    cont_cartas_rojas++;
                    if(cont_cartas_rojas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 5
                if(carta_cpu >= 5 && carta_cpu <= 9 && carta_desafio_jugador == 5)
                {
                    cont_cartas_amarillas++;
                    if(cont_cartas_amarillas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 6
                if(carta_cpu >= 10 && carta_cpu <= 14 && carta_desafio_jugador == 6)
                {
                    cont_cartas_verdes++;
                    if(cont_cartas_verdes == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 7
                if(carta_cpu >= 15 && carta_cpu <= 19 && carta_desafio_jugador == 7)
                {
                    cont_cartas_azules++;
                    if(cont_cartas_azules == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD 8
                if(carta_desafio_jugador == 8)
                {
                    carta_desafio_jugador = 0;
                }
            }
            else
            {
                //VICTORIA CPU
                cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE ", mostrar_carta_para_jugar(carta_cpu), cout << " ES MAYOR A ", mostrar_carta_para_jugar(carta_a_jugar), cout << endl << endl;
                quien_gano = 0;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
            }
        }
    }
    //Posibilidades al usar carta de nieve
    if(carta_a_jugar >= 20 && carta_a_jugar <= 39)
    {
        if(carta_cpu >= 40 && carta_cpu <= 59)
        {
            cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE NIEVE VENCE A AGUA" << endl;
            quien_gano = 1;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
            //VERIFICACION DE RONDA
            if(carta_desafio_jugador == 3)
            {
                carta_desafio_jugador = 0;
            }
            //POSIBILIDAD DESAFIO 4
            if(carta_cpu >= 40 && carta_cpu <= 44 && carta_desafio_jugador == 4)
            {
                cont_cartas_rojas++;
                if(cont_cartas_rojas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 5
            if(carta_cpu >= 45 && carta_cpu <= 49 && carta_desafio_jugador == 5)
            {
                cont_cartas_amarillas++;
                if(cont_cartas_amarillas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 6
            if(carta_cpu >= 50 && carta_cpu <= 54 && carta_desafio_jugador == 6)
            {
                cont_cartas_verdes++;
                if(cont_cartas_verdes == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 7
            if(carta_cpu >= 55 && carta_cpu <= 59 && carta_desafio_jugador == 7)
            {
                cont_cartas_azules++;
                if(cont_cartas_azules == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            if(carta_cpu % 5 == carta_a_jugar % 5 && carta_desafio_jugador == 9)
            {
                cont_cartas_iguales++;
                if(cont_cartas_iguales == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
        }
        else if(carta_cpu >= 0 && carta_cpu <= 19)
        {
            //VICTORIA CPU
            cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE FUEGO VENCE A NIEVE" << endl;
            quien_gano = 0;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
        }
        else if(carta_cpu >= 20 && carta_cpu <= 39)
        {
            carta_limpia_jugador = carta_a_jugar % 5;
            carta_limpia_cpu = carta_cpu % 5;
            if(carta_limpia_jugador == carta_limpia_cpu)
            {
                quien_gano=2;
            }
            if(carta_limpia_jugador > carta_limpia_cpu)
            {
                //VICTORIA DEL JUGADOR
                cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE ", mostrar_carta_para_jugar(carta_a_jugar), cout << " ES MAYOR A  ", mostrar_carta_para_jugar(carta_cpu), cout << endl << endl;
                quien_gano = 1;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
                //VERIFICACION DE RONDA
                if(carta_desafio_jugador == 1)
                {
                    carta_desafio_jugador = 0;
                }
                //POSIBILIDAD DESAFIO 4
                if(carta_cpu >= 20 && carta_cpu <= 24 && carta_desafio_jugador == 4)
                {
                    cont_cartas_rojas++;
                    if(cont_cartas_rojas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 5
                if(carta_cpu >= 25 && carta_cpu <= 29 && carta_desafio_jugador == 5)
                {
                    cont_cartas_amarillas++;
                    if(cont_cartas_amarillas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 6
                if(carta_cpu >= 30 && carta_cpu <= 34 && carta_desafio_jugador == 6)
                {
                    cont_cartas_verdes++;
                    if(cont_cartas_verdes == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 7
                if(carta_cpu >= 35 && carta_cpu <= 39 && carta_desafio_jugador == 7)
                {
                    cont_cartas_azules++;
                    if(cont_cartas_azules == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 8
                if(carta_desafio_jugador == 8)
                {
                    carta_desafio_jugador = 0;
                }
                // POSIBILIDAD DESAFIO 10
                if(carta_desafio_jugador == 10)
                {
                    cont_rondas_ganadas_consecutivas++;
                    if(cont_rondas_ganadas_consecutivas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
            }
            else
            {
                //VICTORIA CPU
                cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE ", mostrar_carta_para_jugar(carta_cpu), cout << " ES MAYOR A  ", mostrar_carta_para_jugar(carta_a_jugar), cout << endl << endl;
                quien_gano = 0;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
            }
        }
    }
    //Posibilidades al usar carta de agua
    if(carta_a_jugar >= 40 && carta_a_jugar <= 59)
    {
        if(carta_cpu >= 0 && carta_cpu <= 19)
        {
            //VICTORIA DEL JUGADOR
            cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE AGUA VENCE A FUEGO" << endl;
            quien_gano = 1;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
            //VERIFICACION DE RONDA
            if(carta_desafio_jugador == 2)
            {
                carta_desafio_jugador = 0;
            }
            //POSIBILIDAD DESAFIO 4
            if(carta_cpu >= 0 && carta_cpu <= 4 && carta_desafio_jugador == 4)
            {
                cont_cartas_rojas++;
                if(cont_cartas_rojas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 5
            if(carta_cpu >= 5 && carta_cpu <= 9 && carta_desafio_jugador == 5)
            {
                cont_cartas_amarillas++;
                if(cont_cartas_amarillas == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 6
            if(carta_cpu >= 10 && carta_cpu <= 14 && carta_desafio_jugador == 6)
            {
                cont_cartas_verdes++;
                if(cont_cartas_verdes == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            //POSIBILIDAD DESAFIO 7
            if(carta_cpu >= 15 && carta_cpu <= 19 && carta_desafio_jugador == 7)
            {
                cont_cartas_azules++;
                if(cont_cartas_azules == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
            if(carta_cpu % 5 == carta_a_jugar % 5 && carta_desafio_jugador == 9)
            {
                cont_cartas_iguales++;
                if(cont_cartas_iguales == 2)
                {
                    carta_desafio_jugador = 0;
                }
            }
        }
        //A REVISAR MAÑANA
        if(carta_cpu >= 20 && carta_cpu <= 39)
        {
            //VICTORIA CPU
            cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE NIEVE VENCE A AGUA" << endl;
            quien_gano = 0;
            cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
        }
        //A REVISAR
        if(carta_cpu >= 40 && carta_cpu <= 59)
        {
            carta_limpia_jugador = carta_a_jugar % 5;
            carta_limpia_cpu = carta_limpia_cpu % 5;
            //INTENTO DE EMPATAR, IGNORAR.
            if(carta_limpia_jugador == carta_limpia_cpu)
            {
                quien_gano=2;
            }
            //
            if(carta_limpia_jugador > carta_limpia_cpu)
            {
                //VICTORIA DEL JUGADOR
                cout << " " << jugador << " GANA ", mostrar_carta_para_jugar(carta_cpu), cout << " POR QUE ", mostrar_carta_para_jugar(carta_a_jugar), cout << " ES MAYOR A ", mostrar_carta_para_jugar(carta_cpu), cout << endl << endl;
                quien_gano = 1;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas + 1;
                //VERIFICACION DE RONDA
                if(carta_desafio_jugador == 3)
                {
                    carta_desafio_jugador = 0;
                }
                if(carta_cpu >= 40 && carta_cpu <= 44 && carta_desafio_jugador == 4)
                {
                    cont_cartas_rojas++;
                    if(cont_cartas_rojas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 5
                if(carta_cpu >= 45 && carta_cpu <= 49 && carta_desafio_jugador == 5)
                {
                    cont_cartas_amarillas++;
                    if(cont_cartas_amarillas == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 6
                if(carta_cpu >= 50 && carta_cpu <= 54 && carta_desafio_jugador == 6)
                {
                    cont_cartas_verdes++;
                    if(cont_cartas_verdes == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD DESAFIO 7
                if(carta_cpu >= 55 && carta_cpu <= 59 && carta_desafio_jugador == 7)
                {
                    cont_cartas_azules++;
                    if(cont_cartas_azules == 2)
                    {
                        carta_desafio_jugador = 0;
                    }
                }
                //POSIBILIDAD 8
                if(carta_desafio_jugador == 8)
                {
                    carta_desafio_jugador = 0;
                }
            }
            else
            {
                //VICTORIA CPU
                cout << " " << cpu << " GANA ", mostrar_carta_para_jugar(carta_a_jugar), cout << " POR QUE ", mostrar_carta_para_jugar(carta_cpu), cout << " ES MAYOR A  ", mostrar_carta_para_jugar(carta_a_jugar), cout << endl << endl;
                quien_gano = 0;
                cont_rondas_ganadas_consecutivas = cont_rondas_ganadas_consecutivas - 1;
            }
        }
    }
    //DESAFIO 10
    if(cont_rondas_ganadas_consecutivas == 2 && carta_desafio_jugador == 10)
    {
        carta_desafio_jugador = 0;
    }
    //Si empatan



    cout << " " << system("pause");
    system("cls");
}
void intercambiar_cartas(bool cartas_elementos_jugador[], bool cartas_elementos_cpu[], int quien_gano, int carta_a_jugar, int carta_cpu)
{
    if(quien_gano == 1)
    {
        cartas_elementos_jugador[carta_cpu]=true;
        cartas_elementos_cpu[carta_cpu]=false;
    }
    if(quien_gano == 0)
    {
        cartas_elementos_cpu[carta_a_jugar]=true;
        cartas_elementos_jugador[carta_a_jugar]=false;
    }
    if(quien_gano == 2)
    {
        cout << " ¡EMPATE! " << endl << " YA QUE LAS CARTAS SON EL MISMO ELEMENTO Y MISMO NUMERO " << endl;
        cout << " LAS CARTAS VOLVIERON A SU MAZO NUEVAMENTE " << endl << endl;
    }
}
void robar_carta_del_mazo_cpu(bool comprobar_cartas_elementos[], bool cartas_elementos_cpu[])
{
    int carta, carta_robada=0;
    while(carta_robada != 1)
    {
        carta = (rand()%60);
        if(comprobar_cartas_elementos[carta] == false)
        {
            comprobar_cartas_elementos[carta]=true;
            cartas_elementos_cpu[carta]=true;
            carta_robada=1;
        }
    }
}
bool determinar_elementos(bool cartas_elementos[], bool &victoria)
{
    //CUENTO LOS ELEMENTOS Y SUS COLORES PARA EVALUAR LAS 2 POSIBLES COMBINACIONES GANADORAS
    int fuego=0, f_rojo=0, f_amarillo=0, f_verde=0, f_azul=0;
    int nieve=0, n_rojo=0, n_amarillo=0, n_verde=0, n_azul=0;
    int agua=0, a_rojo=0, a_amarillo=0, a_verde=0, a_azul=0;
    //SEGUNDA POSIBILIDAD DE COMBINAR 1 ELEMENTO DE 3 COLORES DIFERENTES
    bool vector_fuego_colores[4]= {};
    bool vector_nieve_colores[4]= {};
    bool vector_agua_colores[4]= {};

    //EVALUO LOS POSIBLES CASOS DE COMBINACIONES GANADORAS
    int i;
    for(i=0; i<60; i++)
    {
        //CASOS DE FUEGO
        if(cartas_elementos[i] == true && i >= 0 && i <= 19)
        {
            if(i >= 0 && i <= 4)
            {
                fuego++;
                f_rojo++;
            }
            if(i >= 5 && i <= 9)
            {
                fuego++;
                f_amarillo++;
            }
            if(i >= 10 && i <= 14)
            {
                fuego++;
                f_verde++;
            }
            if(i >= 15 && i <= 19)
            {
                fuego++;
                f_azul++;
            }
        }
        //CASOS DE NIEVE
        if(cartas_elementos[i] == true && i >= 20 && i <= 39)
        {
            if(i >= 20 && i <= 24)
            {
                nieve++;
                n_rojo++;
            }
            if(i >= 25 && i <= 29)
            {
                nieve++;
                n_amarillo++;
            }
            if(i >= 30 && i <= 34)
            {
                nieve++;
                n_verde++;
            }
            if(i >= 35 && i <= 39)
            {
                nieve++;
                n_azul++;
            }
        }
        //CASOS DE AGUA
        if(cartas_elementos[i] == true && i >= 40 && i <= 59)
        {
            if(i >= 40 && i <= 44)
            {
                agua++;
                a_rojo++;
            }
            if(i >= 45 && i <= 49)
            {
                agua++;
                a_amarillo++;
            }
            if(i >= 50 && i <= 54)
            {
                agua++;
                a_verde++;
            }
            if(i >= 55 && i <= 59)
            {
                agua++;
                a_azul++;
            }
        }
    }
    //EVALUO LOS CASOS ANTERIORES REGISTRADOS
    if(fuego > 0 && agua > 0 && nieve > 0)
    {

    }

    /*if(fuego > 0)
    {
       if(f_rojo > 0 || f_amarillo > 0  || f_verde > 0  || f_azul > 0)
       {
          if(nieve > 0)
          {
             if(n_rojo > 0 || n_amarillo > 0  || n_verde > 0  || n_azul > 0)
             {
                if(agua > 0)
                {
                   if(a_rojo > 0 || a_amarillo > 0  || a_verde > 0  || a_azul > 0)
                   {
                       victoria=true;
                   }
                }
             }
          }
       }
    }
    */
    //EVALUO LA OTRA ALTERNATIVA DE COMBINACION GANADORA DE ELEMENTOS
    if(fuego >= 3)
    {
        victoria=true;
    }
    if(agua >= 3)
    {
        victoria=true;
    }
    if(nieve >= 3)
    {
        victoria=true;
    }




}

void determinar_hitos()
{

}
void tabla_hitos()
{
    cout << "CARD-JITSU++"                                                              << endl;
    cout << "------------------------------------------------------------------------"  << endl << endl;

    cout << "HITO                                                            ANGEL"     << endl;
    cout << "------------------------------------------------------------------------"  << endl;
    cout << "Ganador de la partida                                           3 PDV"     << endl;
    cout << "Combinación elementos cumplido x contrario                     -1 PDV"     << endl;
    cout << "Carta desafío cumplido x contrario                              0 PDV"     << endl;
    cout << "Rondas ganadas al adversario                                    4 PDV"     << endl;
    cout << "Rondas ganadas al adversario con igual elemento                10 PDV"     << endl;
    cout << "------------------------------------------------------------------------"  << endl;
    cout << "TOTAL                                                          16 PDV"     << endl;

    cout << "¡Ganador ANGEL con 16 puntos de victoria!";
}




