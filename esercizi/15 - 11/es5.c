#include<stdio.h>
#include<math.h>

typedef struct{
    float x;
    float y;
}punto;

float distanza(punto, punto);
float perimetro(punto *, int);

 int main(){
//     lllllllllllllllllll
    punto vertici[10];
    int nv, i;

    do{
        printf("inserire numero vertici tra uno e 10 ");
        scanf("%d", nv);
    }while(nv < 3 || nv > 10);

    for(i = 0; i < nv; i++){
        printf("inserisci coordinate vertice %d  ", i);
        scanf("%f %f", vertici[i].x, vertici[i].y);
    }

    printf("il perimetro risulta %f \n", perimetro(vertici, &nv));

    return 0;
}

float distanza(punto a, punto b){
    return sqrtf((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
float perimetro(punto punti[], int n){
    float perimetro;
    int i;

    perimetro = distanza(punti[0], punti[n - 1]);

    for(i = 0; i < n - 1; i++){
        perimetro += distanza(punti[i], punti[i + 1]);
    }

    return perimetro;
}