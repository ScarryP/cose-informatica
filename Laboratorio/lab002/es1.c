#include<stdio.h>

#define DIM_A 10
#define DIM_B 5

int main(){
    int a[DIM_A], b[DIM_B];
    int i, cont = 0, inizio = 0;

    for(i = 0; i < DIM_A; i++){
        printf("ciao bello inserisci valore di a in posizione %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n ----------------- \n");

    for(i = 0; i < DIM_B; i++){
        printf("ciao bello inserisci valore di b in posizione %d: ", i);
        scanf("%d", &b[i]);
    }

    while(a[inizio] != b[0] && inizio <= DIM_A - DIM_B){
        inizio++;
    }

    for(i = 0; i < DIM_B; i++){
        if(a[inizio + i] == b[i]) cont ++;
    }

    if(cont == 5){
        printf("CONTIENE");
    }
}
