#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroRighe, rigaAttuale, i;
    rigaAttuale = 1;

    printf("inserisci numero di righe");
    scanf("%d", &numeroRighe);

    for (rigaAttuale = 1; rigaAttuale <= numeroRighe; rigaAttuale++)
    {
        for (i = 0; i < numeroRighe - rigaAttuale; i = i + 1)
            printf(" ");
        for (i = 1; i < rigaAttuale * 2; i = i + 1)
        {
            if ((i % 3) == 0)
                printf("\e[5;33m");
            if ((i % 2) == 0)
                printf("\e[5;32m");
            printf("*");
            printf("\033[0m");
        }
        printf("\n");
    }

    return 0;
}