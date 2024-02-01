#include "cartaDesafio.h"
#include <ctime>
#include "rlutil.h"
#include "Jugador.h"


void verCartaDesafio(int carta){
    system("cls");
    switch(carta)
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
    rlutil::locate(42,19);
    cout << "CARTA DESAFIO OBTENIDA";
    rlutil::locate(35,21);
    system("pause");
    system("cls");
}
void menuParaLevantarCartaDesafio(){
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
    rlutil::locate(33,11);
    cout << "PRESIONE UNA TECLA PARA LEVANTAR SU CARTA DESAFIO" << endl;
    rlutil::hidecursor();
    getch();
    rlutil::showcursor();
    system("cls");
}

void mensajeCartaObtenida(Jugador &jugador){
    cout << "CARTA DESAFIO OBTENIDA";
    verCartaDesafio(jugador.getCartaDesafio());
}



void levantarCartaDesafio(Jugador &obj, bool mazoCartasDesafios[]){
    int carta, repetida = 0;
    srand(time(NULL));
    while (repetida != 1){
        carta = (rand()%10);
        if(mazoCartasDesafios[carta] == false){
            mazoCartasDesafios[carta] = true;
            obj.setCartaDesafio(carta);
            repetida++;

        }
    }
}

