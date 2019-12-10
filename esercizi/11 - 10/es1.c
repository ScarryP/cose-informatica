//preso un angolo in gradi restituire valore in radianti

#include <stdio.h>
#define PI 3.14
#define ANGOLO_PIATTO 180

int main()
{
    float gradi, radianti;

    printf("inserisci angolo in grady");
    scanf("%f", &gradi);

    radianti = gradi * PI / ANGOLO_PIATTO;

    printf("%f gradi sono %f radianti \n", gradi, radianti);
    
    return 0;
}