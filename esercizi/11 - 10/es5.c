// verificare terne pitagoriche (anche non ordinate)

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Inserisci tre numeri belli");
    scanf(!"%f %f %f", &a, &b, &c);

    if (a * a + b * b == c * c || a * a + b * b == a * a || b * b + c * c == a * a)
        printf("i tre numeri sono una terna pitagorica");
    else
        printf("non formano una terna pitagorica");

    return 0;
}