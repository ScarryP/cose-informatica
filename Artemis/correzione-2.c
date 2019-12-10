//
//  main.c
//  [10666389]-1-2.c


#include <stdio.h>
#include <string.h>
#define N 30
int funzione1 (char parola[]);
int funzione2 (char parola[]);
int funzione3 (char parola[]);
int funzione4 (char parola[]);
int funzione5 (char parola[]);
void tuttominuscolo(char parola[]);

typedef struct{
   char parola[N];
} gioco;


int main(){
    gioco parole[10];
    int i,j,vocali,coppie,m_e_r,alternati,palindroma;
    int lunghezza,num_gioco;
    int vinto=0;
    
    do {
    printf("inserire il numero del gioco: ");
    scanf("%d",&num_gioco);
    }while (num_gioco<0 || num_gioco>5);
  
    
    printf("inserire le 10 parole: ");
    for (i=0;i<10;i++){
        scanf("%s", parole[i].parola);
        tuttominuscolo(parole[i].parola);
    }
   
    
    
//    GIOCO 1
    if(num_gioco==1){
        for (i=0;i<10;i++){
            vocali=funzione1(parole[i].parola);
                if (vocali==1){
                    printf("\n %s",parole[i].parola);
                    vinto++;
                }
    }
        if(vinto>=3)
            printf("\n VINTO");
        else
            printf("\n PERSO");
    }
//    GIOCO 2
    if(num_gioco==2){
        for (j=0;j<10;j++){
            coppie=funzione2(parole[j].parola);
            if(coppie==1){
                printf("\n %s",parole[j].parola);
                vinto++;
            }
        }
        if(vinto>=3)
            printf("\n VINTO");
        else
            printf("\n PERSO");
    }
//    GIOCO 3
    m_e_r=0;
    if(num_gioco==3){
        for(i=0;i<10;i++){
            lunghezza=strlen(parole[i].parola);
            m_e_r= funzione3 (parole[i].parola);
            if (m_e_r==1) {
               
                printf("\n %s",parole[i].parola);
                vinto++;
            }
        }
        if(vinto>=3)
            printf("\n VINTO");
        else
            printf("\n PERSO");
    }
//    GIOCO 4
    if(num_gioco==4){
     
        for(i=0;i<10;i++){
            alternati=funzione4(parole[i].parola);
            if(alternati==0){
                printf("\n %s",parole[i].parola);
                vinto++;
            }
        }
        if(vinto>=3)
            printf("\n VINTO");
        else
            printf("\n PERSO");
    }
//    GIOCO 5
    if(num_gioco==5){
        
        for(i=0;i<10;i++){
            lunghezza=strlen(parole[i].parola);
            palindroma=1;
                for(j=0;j<((lunghezza/2)&&(palindroma!=0));j++){
                    if (parole[i].parola[j] != parole[i].parola[lunghezza-1-j])
                        palindroma=0;
                }
            
            if(palindroma==1){
            printf("\n %s",parole[i].parola);
            vinto++;
            }
        }
        if(vinto>=3)
            printf("\n VINTO");
        else
            printf("\n PERSO");
                 
    
    }
    printf("\n");
    return 0;
}


//FUNZIONI PER VERIFICARE LE PAROLE

int funzione1(char parola[]){
    int i,flag = 0,cont;
    cont=0;
    for(i=0;i<N;i++){
        if(parola[i]=='a' || parola[i]=='e' || parola[i]=='i' || parola[i]=='o' || parola[i]=='u'){
            cont++;
        }
    }
    if(cont>=3)
        flag=1;
    else
        flag=0;
    return flag;
}

int funzione2(char parola[]){
    int i,doppia = 0,coppia;
    for (i=0;i<N;i++){
        if(parola[i]==parola[i+1] && parola[i]!='\0')
            doppia++;
    }
    coppia=0;
    if (doppia>=2)
        coppia=1;
    return coppia;
}

int funzione3(char parola[]) {
    int i,j,m,r,rv = 0;
    r=0;
    m=0;
    for(i=0;(i<N && r!=1);i++){
        if(parola[i]=='m'){
            m=1;
            for(j=i+1;(j<N && r!=1);j++){
                if (parola[j]=='r'){
                        r=1;
                }
            }
        }
    }
    if(r==1)
        rv=1;
    else if(m==0)
        rv=1;
    
    return rv;
}
  
   


int funzione4(char parola[]){
    int i,j,alternate1,alternate2,flag,cont1,cont2;
    alternate1=0;
    cont1=0;
    flag = 0;
    
    for(i=0;i<(strlen(parola));i++){
        if(i+1<strlen(parola)){
            if((parola[i]=='a') || (parola[i]=='e') || (parola[i]=='i') || (parola[i]=='o') || (parola[i]=='u')) {
                if((parola[i+1]=='a') || (parola[i+1]=='e') || (parola[i+1]=='i') || (parola[i+1]=='o') || (parola[i+1]=='u')){
                    flag = 1;
                    i=strlen(parola);
                }
            }
        
            if((parola[i]!='a') && (parola[i]!='e') && (parola[i]!='i') && (parola[i]!='o') && (parola[i]!='u')){
                if((parola[i+1]!='a') && (parola[i+1]!='e') && (parola[i+1]!='i') && (parola[i+1]!='o') &&  (parola[i+1]!='u')){
                    flag=1;
                    i=strlen(parola);
                }
            }
        }
    }

   
    return flag;
}
void tuttominuscolo(char parola[]){
    int i,j;
    
    for(i = 0; i < strlen(parola); i++){
            if(parola[i] > 'A' && parola[i] < 'Z'){
                parola[i] = parola[i] + 32;
            }
    }
}




