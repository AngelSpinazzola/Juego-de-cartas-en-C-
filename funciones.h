#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void pedir_nombre(string &jugador);
void mostrar_menu_principal();
void mostrar_opciones(string jugador, string CPU, bool robar_carta, int ronda);
void elegir_entre_3_opciones(int opcion_menu_3_opciones, int carta_desafio, bool cartas_elementos_jugador[], bool comprobar_cartas_elementos[], string jugador, string CPU);
void ver_carta_desafio(int carta_desafio_jugador);
void ver_cartas_de_elementos(bool cartas_elementos_jugador[], string jugador, string CPU, int ronda);
void asignar_cartas_elementos(bool comprobar_cartas_elementos[], bool cartas_elementos_jugador[]);
void robar_carta_del_mazo(bool comprobar_cartas_elementos[], bool cartas_elementos_jugador[], bool &robar_carta);
void robar_carta_del_mazo_cpu(bool comprobar_cartas_elementos[], bool cartas_elementos_cpu[]);
void mostrar_carta_robada(int carta);
void elegir_carta_elemento(bool cartas_elementos_jugador[], string jugador, string CPU, bool &robar_carta, int &carta_a_jugar);
void mostrar_carta_para_jugar(int carta);
int generar_carta_para_jugar_cpu(bool cartas_elementos_cpu[]);
void comenzar_partida(int &carta_a_jugar, int &carta_cpu, string jugador, string cpu, int &quien_gano, int &carta_desafio_jugador, int &cont_cartas_rojas, int &cont_cartas_amarillas, int &cont_cartas_verdes, int &cont_cartas_azules, int &cont_cartas_iguales, int &cont_rondas_ganadas_consecutivas, int ronda, int &primer_ronda_jugador);
bool determinar_quien_gana(int carta_a_jugar, int carta_cpu, string jugador, string cpu, int &quien_gano, int &carta_desafio_jugador, int &cont_cartas_rojas, int &cont_cartas_amarillas, int &cont_cartas_verdes, int &cont_cartas_azules, int &cont_cartas_iguales, int &cont_rondas_ganadas_consecutivas, int &primer_ronda_jugador);
void intercambiar_cartas(bool cartas_elementos_jugador[], bool cartas_elementos_cpu[], int quien_gano, int carta_a_jugar, int carta_cpu);



//DETERMINAR COMBINACION GANADO DE ELEMENTOS
bool determinar_elementos(bool cartas_elementos[], bool &victoria);


void determinar_hitos();

void tabla_hitos();








#endif
