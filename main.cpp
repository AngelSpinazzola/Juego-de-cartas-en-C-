#include <locale.h>
#include "Jugador.h"
#include "App.h"

int main()
{

    setlocale(LC_CTYPE, "Spanish");
    App aplicacion;

    aplicacion.Ejecutar();


    return 0;
}
