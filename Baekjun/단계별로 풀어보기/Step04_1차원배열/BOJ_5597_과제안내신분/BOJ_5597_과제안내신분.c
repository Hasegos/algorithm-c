#include <stdio.h>

int main(){
    
    int arr[30],n;    
    int max = 0, min = 31;

    for(int i = 0; i < 30; i++){
        arr[i] = i + 1;
    }
    
    for(int i = 0; i < 28; i++){
        scanf("%d", &n);
        arr[n-1] = 0;
    }
   
    for(int i = 0; i < 30; i++){
        if(arr[i] != 0)   {
            if(max < arr[i]){
                max = arr[i];
            }
            if(min > arr[i]){
                min = arr[i];
            }
        }
    }
    printf("%d\n%d",min,max);
}