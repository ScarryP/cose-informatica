#include<stdio.h>

int main (){
    int numero, divisore;
    divisore = 2;

    printf("Ciao bello inserisci numero");
    scanf("%d", &numero);

    while(numero % divisore != 0) divisore += 1;

    if(divisore < numero) printf("il numero non era primo");
    else printf("il numero era primo");

    return 0;
}