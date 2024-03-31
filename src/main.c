#include <greetings.h>
#include <stdio.h>
#include "dinamica.h"
#include "estatica.h"

int main(int argc, char *argv[])
{
    printf("Hello from archivo main. \n");
    greetings();
    printf("Llamo a libreria estática desde el programa principal. Obtengo: '%d' \n", print_static_lib("Mensaje para libreria estatica"));
    printf("Llamo a libreria dinámica desde el programa principal. Obtengo: '%d' \n", print_dynamic_lib("Mensaje para libreria dinámica"));
    return 0;
}
