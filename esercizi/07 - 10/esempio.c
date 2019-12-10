#include<stdio.h>

#define MIN_IN_ORA 60
#define SEC_IN_MIN 60

int main (){
    int tempo;
    int sec, min, ore;

    printf("-------------------------------------------- \n **inserisci tempo in secondi** \n");
    scanf("%d", &tempo);

    ore = tempo / (MIN_IN_ORA * SEC_IN_MIN);
    tempo = tempo % (MIN_IN_ORA * SEC_IN_MIN);
    min = tempo / SEC_IN_MIN;
    sec = tempo % SEC_IN_MIN;

    printf("\n\n ore %d, \n minuti %d, \n secondi %d", ore, min, sec);

    return 0;
}