#include<stdio.h>

#define LEN 5
#define TRUE 1
#define FALSE 0

int cerca(int [], int, int);

int main(){
    int nums[LEN];
    int i, num;

    for(i = 0; i < LEN; i++){
        printf("inserisci numero");
        scanf("%d", nums + i);
    }
    printf("inserisci numero da cercare \n");
    scanf("%d", &num); 

    if(cerca(nums, num, LEN)){
        printf("presente");
    }else printf("assente");
    }

int cerca(int arr[], int num, int n){
    if(n == 0){
        return FALSE;
    }else if (arr[n-1] == num){
        return TRUE;
    }else{
        return cerca(arr, num, n-1 );
    }

}