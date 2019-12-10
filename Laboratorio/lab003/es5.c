#include<stdio.h>
#include<math.h>

typedef struct
{
    int a;
    int b;
} complesso;

int main()
{
    complesso bob[4];
    int i;

    for(i = 0; i < 2; i++){
        printf("abbello inserisci numero %d  formato: a + ib : ", i);
        scanf("%d + i%d", &bob[i].a,  &bob[i].b);
    }
    bob[2].a = bob[0].a + bob[1].a;
    bob[2].b = bob[0].b + bob[1].b;

    if(fabs((float)bob[0].a/bob[0].b) == fabs((float)bob[1].a/bob[1].b)){
        printf("pheega sono in fase zio \n");
    }

    printf("la somma risulta %d + i %d", bob[2].a, bob[2].b);

}