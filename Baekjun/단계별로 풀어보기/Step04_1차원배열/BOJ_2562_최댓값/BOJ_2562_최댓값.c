#include <stdio.h>

int main(){
    int a,max = 0, min = 100;
    int arr[10];
    

    for(int i = 0; i < 9; i++){
        scanf("%d", &a);
        arr[i] = a;

        if(max < a){
            max = a ;
        }
        if(min > a){
            min = a;
        }
    }
    for(int i = 0; i < 9; i++){
        if(arr[i] == max){
            printf("%d\n%d", max , i + 1);
        }
    }    
}