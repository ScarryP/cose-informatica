#include <stdio.h>
#define LUNG 10

int main()
{
    int num, cont = 0, somma = 0;
    float media;

    while (cont < LUNG)
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
