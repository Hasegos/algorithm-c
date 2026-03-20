#include <stdio.h>

int main(){
    int N, A,B,count = 0;
    scanf("%d", &N);

    int arr[N + 1];
    for(int i = 0; i < N; i++){
        scanf("%d", &A);
        arr[i] = A;        
    }
    scanf("%d", &B);

    for(int i = 0; i < N; i++){
        if(arr[i] == B){
            count ++;
        }
    }
    printf("%d", count);
}