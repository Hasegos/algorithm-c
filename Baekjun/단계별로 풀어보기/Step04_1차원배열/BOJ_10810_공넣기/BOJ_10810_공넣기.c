#include <stdio.h>

int main(){
    int N,M,i,j,k;
    scanf("%d %d", &N, &M);   
    int arr[N];

    for(int a = 0; a < N; a++){
        arr[a] = 0;
    }

    for(int b = 0; b < M; b++){
        scanf("%d %d %d", &i, &j, &k);
        for(int h = i - 1; h <= j - 1; h++){
            arr[h] = k;
        }
    }
    
    for(int i = 0; i < N; i++){
       printf("%d ", arr[i]);
    }
}