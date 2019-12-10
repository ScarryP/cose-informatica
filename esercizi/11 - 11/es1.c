//funzione che inverte un array

#include<stdio.h>

#define N 5

void inverti(int *, int);

int main(){
    int v[N];
    int j;

    //input array
    for(j = 0; j < N; )

    inverti(v, N);

    //stampa array

    return 0;
}

void inverti(int * a, int dim){
    int temp, i;

    for(i = 0; i < dim/2; i++){
        temp = a[i];
        a[i] = a[dim - i];
        a[dim - i] = temp;
    }
}