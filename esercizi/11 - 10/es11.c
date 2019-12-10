#include <stdio.h>

int main()
{
    int numeroRighe, rigaAttuale, i;
    rigaAttuale = 1;

    printf("inserisci numero di righe");
    scanf("%d", &numeroRighe);

    for (rigaAttuale = 1; rigaAttuale <= numeroRighe; rigaAttuale ++)
    {
        for (i = 0; i < numeroRighe - rigaAttuale; i = i + 1)
            printf(" ");
        for (i = 1; i < rigaAttuale * 2; i = i + 1)
            printf("*");
        printf("\n");
    }
    return 0;
}


/*


    +
   +++
  +++++
++++++++

*/