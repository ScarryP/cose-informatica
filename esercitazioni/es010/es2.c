#include <stdio.h>
#include <stdlib.h>

#define LEN 30

typedef struct
{
    char cognome[LEN + 1];
    char nome[LEN + 1];
    char sesso;
    int anno;
} persona;