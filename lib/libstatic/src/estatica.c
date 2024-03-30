#include <stdio.h>
#include "../include/estatica.h"
#include <string.h>

int print_static_lib(char* mje) 
{
    printf("Soy la biblioteca estática, se recibe el mensaje: '%s' y retorna: '%ld'\n", mje, strlen(mje) );
    return strlen(mje);
}
