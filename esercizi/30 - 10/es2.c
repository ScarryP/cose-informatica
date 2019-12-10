#include <stdio.h>

#define DIM 10

float faiCose(int *v, int, int *, int *);

int main()
{
    int voti[DIM];
    int i, max, min;
    float media;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci il numero %d ", i);
        scanf("%d", &voti[i]);
    }
    media = faiCose(voti, DIM, &max, &min);
    printf("voto medio %f \n", media);
    printf("voto massimo %d \n", max);
    printf("voto massimo %d \n", min);
}

float faiCose(int *v, int dim, int *maxV, int *minV)
{
    int i, max, min, somma;
    float media;

    media = 0.0;
    max = v[0];
    min = v[0];
    somma = v[0];

    for (i = 1; i < dim; i++)
    {
        somma = somma + v[i];
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    media = (float)somma / dim;
    *maxV = max;
    *minV = min;
    return media;
}



/*

            MAIN
voti   0|       20      |
       1|       25      |
       2|       30      |
      ..|               |
      ..|               |
        |               |min
        |               |max
        |               |media
        |               |



            FAI COSE
        |       250     | dim
v      0|  addr voti[0] |
       1|               |
       2|               |
        |               |
        |               |
        |      22       |min
        |      30       |max
        |      28       |media
        |    addr min   |minV
        |    addr max   |maxV
        |               |














*/
