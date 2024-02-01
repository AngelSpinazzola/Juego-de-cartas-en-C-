#include <iostream>
#include <clocale>
#include "CargarCadena.h"

void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=std::cin.get();

        if (palabra[i]=='\n'){

            break;
        }
    }

    palabra[i]='\0';

    fflush(stdin);

}
