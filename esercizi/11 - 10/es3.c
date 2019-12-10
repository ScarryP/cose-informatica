//dati a, b risolvere ax + b = 0

#include <stdio.h>

int main()
{
    float a, b, x;

    printf("ciao bellissimo, inserisci a \n");
    scanf("%f", &a);
    printf("ciao bellissimo, inserisci b \n");
    scanf("%f", &b);

    if (a == 0)
    {
        if (b == 0)
        {
            printf("stronzo, a deve essere divero da zero e anche b, viene indeterminata \n");
        }
        else
        {
            printf("stronzo, a deve essere divero da zero, viene impossibile \n");
        }
    }
    else
    {
        x = -b / a;
        printf("ciao bello, risultato %f \n", x);
    }

    return 0;
}