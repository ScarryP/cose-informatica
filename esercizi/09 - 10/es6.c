#include <stdio.h>
#define LUNG 10

int main()
{
    int num, cont, somma = 0;
    float media;

    for (cont = 0; cont < LUNG; cont = cont + 1)
    {

        printf("inserisci numero bello \n");
        scanf("%d", &num);

        somma += num;
        cont += 1;
    }

    media = (float)somma / LUNG;
    printf("ciao bello, la media è %f", media);

    return 0;
}
