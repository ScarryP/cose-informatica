/* cifrario di cesare */

#include<stdio.h>

#define LEN 32

void cifra(char[], int k);
void decifra(char[], int k);

int main(){
    char parola[LEN];
    int chiave;
    printf("inserisci parolah  ");
    scanf("%s", parola);
    printf("inserisci chiave  ");
    scanf("%d", &chiave);

    cifra(parola, chiave);

    printf("\n%s \n", parola);

    decifra(parola, chiave);

    printf("\n%s \n", parola);

    return 0;
}


void cifra(char s[], int k){
    int i;
    if(k < 0) k = 'Z' - 'A' - k;
    for( i = 0; s[i] != '\0'; i++){
        s[i] += k;
        if(s[i] > 'z' ) s[i] -= 'z' - 'a';
    }
}

void decifra(char s[], int k){
    int i;
    if(k < 0) k = 'Z' - 'A' - k;
    for( i = 0; s[i] != '\0'; i++){
        s[i] -= k;
        if(s[i] < 'a' ) s[i] += 'z' - 'a';
    }
}

// void decifra(char s[], int k){
//     int i;
//     if(k < 0) k = 'Z' - 'A' - k;
//     for( i = 0; s[i] != '\0'; i++){
//         *(s + i) -= k;
//         if(*(s + i) < 'a' ) *(s + i) += 'z' - 'a';
//     }
// }