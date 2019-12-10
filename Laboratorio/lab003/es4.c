#include <stdio.h>

//strlen() prende una stringa retituisce una lunghezza
#define DIM 100

int main()
{
    char bob[DIM + 1];
    int lun = 0;

    printf("ciao bello inserisci la stringa ");
    gets(bob);

    while (bob[lun] != '\0' && lun <= DIM)
    {
        lun++;
    }
    printf("la lunghezza corrisponde a %d ", lun);

    return 0;
}
