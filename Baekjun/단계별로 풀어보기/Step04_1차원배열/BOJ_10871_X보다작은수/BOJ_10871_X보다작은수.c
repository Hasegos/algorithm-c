#include <stdio.h>

int main(){
    int N,X,a;
    scanf("%d %d", &N, &X);

    int A[N+1]; 
    for(int i = 0; i < N; i++){
        scanf("%d", &a);
        A[i] = a;
    }

    for(int i = 0; i < N; i++){
        if(A[i] < X){
            printf("%d ", A[i]);
        }
    }
}