#include <stdio.h>
#include <math.h>

#define MAX 10

typedef struct
{
    int a;
    int b;
} complesso;

int main()
{
    complesso bob[MAX];
    int i;
    long modulo, angolo, maxMod = 0, minAngolo = 90, maxPos = 0, minPos = 0;

    for (i = 0; i < MAX; i++)
    {
        printf("abbello inserisci numero %d  formato: a + ib : ", i);
        scanf("%d + i%d", &bob[i].a, &bob[i].b);
        modulo = bob[i].a * bob[i].a + bob[i].b * bob[i].b;
        if (modulo > maxMod)
        {
            maxPos = i;
            maxMod = modulo;
        }
        angolo = atan(lfabs((long)bob[i].b / bob[i].a));
        if (angolo < minAngolo)
        {
            minPos = i;
            minAngolo = angolo;
        }
    }

    printf("la somma risulta %d + i %d", bob[2].a, bob[2].b);
}