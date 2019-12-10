#include <stdio.h>

int main()
{
    int e1, e2, e3, somma;
    float media;

    printf("inserisci i tre voti \n");
    scanf("%d %d %d", e1, e2, e3);

    somma = e1 + e2 + e3;
    media = somma / 3.0;      //oppure (float)somma / 3

    printf("Somma: %d \n Media: %f \n", somma, media);

    if(media >= 18) printf("esame superatoh");
    else printf("esame NON superatoh");

    return 0;
}