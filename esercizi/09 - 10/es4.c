#include <stdio.h>

int main()
{
    int num, cont = 0, somma = 0;
    float media;

    printf("inserisci numero bello");
    scanf("%d", &num);

    while (num != 0)
    {
        somma += num;
        cont += 1;
        printf("inserisci numero bello");
        scanf("%d", &num);
    }

    if (cont == 0)
        printf("\n non hai inserito numeri stronzo");
    else
    {
        media = (float)somma / cont;
        printf("ciao bello, la media %f", media);
    }
    return 0;
}
