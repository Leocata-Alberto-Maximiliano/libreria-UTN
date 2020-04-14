#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "strings.h"

void getString(char dato[], char mensaje[], int tamanioDato)
{
    int len;

    printf("%s", mensaje);
    fflush(stdin);

    fgets(dato, tamanioDato, stdin);

    len = strlen(dato);

    dato[len-1] = '\0';
}








