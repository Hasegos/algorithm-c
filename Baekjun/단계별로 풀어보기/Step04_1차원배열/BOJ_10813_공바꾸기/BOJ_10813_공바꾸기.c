#include <stdio.h>

int main(){
    int N,M,i,j,change = 0;
    scanf("%d %d", &N, &M);   

    int arr[N];
    for(int a = 0; a < N; a++){
        arr[a] = a + 1;        
    }

    for(int b = 0; b < M; b++){
        scanf("%d %d", &i, &j);

        change = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = change;
    }
    for(int c = 0; c < N; c++){
        printf("%d ", arr[c]);
    }
}