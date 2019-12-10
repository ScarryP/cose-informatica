#include<stdio.h>

int fattoriale(int);

int main(){
    int num1, num2;
    int fatt1, fatt2, diff;
    int coeff;

    scanf("%d", &num1);
    scanf("%d", &num2);

    /* calcolo fattoriale di num 1*/
    fatt1 = fattoriale(num1);

    /*calcxolo fattoriale di num 2 */
    fatt2 = fattoriale(num2);

    /* calcolo fattoriale della differenza*/
    diff = fattoriale(num1 - num2);

    coeff = fatt1 / (fatt2 * diff);

    printf("\n %d", coeff );

    return 0;
}

int fattoriale(int numero){
    int risultato = 1, i;

    for( i = 1; i <= numero; i++){
        risultato *= i;
    }

    return risultato;
}