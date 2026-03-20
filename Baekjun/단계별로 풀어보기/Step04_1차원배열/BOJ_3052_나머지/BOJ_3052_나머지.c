#include <stdio.h>

int main(){
    
    int a,countSame = 0, countDifferent = 0;
    int arr[10];    

    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        arr[i] = a % 42;
    }
    for(int i = 0; i < 10; i++){
        for(int j = i + 1 ; j < 10; j++){           
            if(arr[i] == arr[j]){
                countSame++;
            }
        }
        if(countSame == 0){
            countDifferent++;
        }
        countSame = 0;
    }    
    printf("%d", countDifferent);
}