#include <stdio.h>
#include "../include/dinamica.h"
#include <string.h>

int print_dynamic_lib(char* mje) 
{
    printf("Soy la biblioteca dinamica, se recibe el mensaje: '%s' y retorna: '%ld'\n", mje, strlen(mje) );
    return strlen(mje);
}
