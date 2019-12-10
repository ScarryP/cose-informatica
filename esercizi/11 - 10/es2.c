//dati a, b risolvere ax + b = 0

#include<stdio.h>

int main(){
    float a, b, x;

    printf("ciao bellissimo, inserisci a e b \n");
    scanf("%f %f", &a, &b);

     x = -b / a;

    printf("ciao bello, risultato %f \n", x);

    return 0;
}