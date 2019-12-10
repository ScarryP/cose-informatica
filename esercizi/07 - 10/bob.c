#include<stdio.h>

int main (){
    int x ,sec, min, ore;
    printf("ciaone amico, inserisci i secondi");
    scanf("%d", &x);
    sec = x % 60;
    x = (x - sec) / 60;
    min = (x - sec) % 60 * 60;
    ore = 

    printf("%d", sec);

}