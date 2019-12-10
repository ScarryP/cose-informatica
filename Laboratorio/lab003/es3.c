#include<stdio.h>
#include<string.h>

#define DIM 100

int main(){
    char bob[DIM + 1];
    char comp[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count, i, j;

    printf("ciao bello inserisci la stringa");
    gets(bob);

    for(i = 0; i < strlen(bob); i++){
        for(j = 0; j < 10; j ++){
            if(bob[i] == comp[j]) count++;   
        }
    }
    printf("il numero di vocali era: %d", count);

    return 0;
}