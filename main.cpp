#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include "rlutil.h"
using namespace std;
#include "funciones.h"


int main()
{
    setlocale(LC_CTYPE, "Spanish");
    string jugador, cpu="CPU";
    srand(time(NULL));
    int opcion, opcion_menu_3_opciones=0, carta_desafio_jugador, carta_desafio_cpu, random_desafio_cpu, carta_a_jugar, ronda=0;
    int carta_cpu, valor=10;
    bool fin_de_juego=false, robar_carta=false;
    bool carta_desafio_cpu_bool = false;
    bool comprobar_cartas_elementos[60]= {};
    bool cartas_elementos_jugador[60]= {};
    bool cartas_elementos_cpu[60]= {};
    int quien_gano, rondas=0;
    bool victoria_jugador=0;


    // DETERMINO EL DESAFIO A CUMPLIR
    carta_desafio_jugador = (rand() % 10)+1;
    //carta_desafio_jugador = 1              ;


    // DESAFIO 4
    int cont_cartas_rojas=0;
    // DESAFIO 5
    int cont_cartas_amarillas=0;
    // DESAFIO 6
    int cont_cartas_verdes=0;
    // DESAFIO 7
    int cont_cartas_azules=0;
    // DESAFIO 8
    // ??
    // DESAFIO 9
    int cont_cartas_iguales=0;
    // ??
    // DESAFIO 10
    int cont_rondas_ganadas_consecutivas=0;
    //HITOS
    int hito_partida_ganada=0;
    int ronda_ganada_mismo_elemento=0;
    int ronda_ganada_al_adversario=0;
    int hito_adversario_cumple_desafio=0;
    int hito_contrario_obtuvo_combinacion_ganadora=0;
    // MODIFICACION
    int primer_ronda_jugador=false;


    // DEFINO LOS 10 POSIBLES DESAFIOS A EVALUAR PARA PREVIAMENTE DECLARAR

    while(carta_desafio_cpu_bool == false)
    {
        random_desafio_cpu = (rand() % 10)+1;
        if(random_desafio_cpu != carta_desafio_jugador && carta_desafio_cpu_bool == false)
        {
            carta_desafio_cpu = random_desafio_cpu;
            carta_desafio_cpu_bool = true;
        }
    }

    asignar_cartas_elementos(comprobar_cartas_elementos, cartas_elementos_jugador);
    asignar_cartas_elementos(comprobar_cartas_elementos, cartas_elementos_cpu);

    mostrar_menu_principal();
    rlutil::locate(37,19);
    cin >> opcion;
    switch(opcion)
    {
    case 1:
        system("cls");
        pedir_nombre(jugador);
        system("cls");
        while(fin_de_juego == false)
        {
            mostrar_opciones(jugador, cpu, robar_carta, ronda);
            //VERIFICO EN LA RONDA SI EL JUGADOR OBTUVO LA COMBINACION DE ELEMENTOS GANADORA

            determinar_elementos(cartas_elementos_jugador, victoria_jugador);
            if(cartas_elementos_jugador == 0 && victoria_jugador == true)
            {
                fin_de_juego = true;
            }
            //
            rlutil::locate(37,17);
            cin >> opcion_menu_3_opciones;
            system("cls");

            if(opcion_menu_3_opciones == 1)
            {
                if(carta_desafio_jugador == 0)
                {
                    cout << endl << endl << " FELICIDADES, YA CUMPLIO LA CARTA DESAFÍO " << endl << endl;
                    rlutil::locate(5, 10);
                }
                if(carta_desafio_jugador != 0)
                {
                    ver_carta_desafio(carta_desafio_jugador);
                }
            }
            if(opcion_menu_3_opciones == 2)
            {
                ver_cartas_de_elementos(cartas_elementos_jugador, jugador, cpu, ronda);

            }
            if(opcion_menu_3_opciones == 3)
            {
                if(robar_carta==false)
                {
                    robar_carta_del_mazo(comprobar_cartas_elementos, cartas_elementos_jugador, robar_carta);
                    robar_carta_del_mazo_cpu(comprobar_cartas_elementos, cartas_elementos_cpu);
                }
                else
                {
                    ronda++;
                    elegir_carta_elemento(cartas_elementos_jugador, jugador, cpu, robar_carta, carta_a_jugar);
                    cout << "Su carta que eligio jugar fue, ", mostrar_carta_para_jugar(carta_a_jugar);
                    system("pause");
                    system("cls");
                    carta_cpu = generar_carta_para_jugar_cpu(cartas_elementos_cpu);
                    comenzar_partida(carta_a_jugar, carta_cpu, jugador, cpu, quien_gano, carta_desafio_jugador, cont_cartas_rojas, cont_cartas_amarillas, cont_cartas_verdes, cont_cartas_azules, cont_cartas_iguales, cont_rondas_ganadas_consecutivas, ronda, primer_ronda_jugador);
                    intercambiar_cartas(cartas_elementos_jugador, cartas_elementos_cpu, quien_gano, carta_a_jugar, carta_cpu);

                    /*verificar_cartas_elementos_jugador();
                    victoria();
                    */
                    determinar_elementos(cartas_elementos_jugador, victoria_jugador);
                    if(carta_desafio_jugador == 0 && victoria_jugador == true)
                    {
                        fin_de_juego = true;
                    }

                }

            }


        }
        if(fin_de_juego == true && victoria_jugador == true)
        {
            tabla_hitos();
        }
        break;
    }
    cout << "PRESIONE UNA TECLA PARA VOLVER...";
    getch();

    return 0;
}
