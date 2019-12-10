#include<stdio.h>

int main (){
int anno, bisestile = 0;

printf("ciaone");
scanf("%d", &anno);

if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) bisestile = 1;

printf("il risultato %d", bisestile);

return 0;


}