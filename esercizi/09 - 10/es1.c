#include<stdio.h>

int main(){
    int x;

    printf("inserisci x");
    scanf("%d", &x);

    if(x <0) x = -x;

    printf("ciao x %d \n", x);

    return 0;
}