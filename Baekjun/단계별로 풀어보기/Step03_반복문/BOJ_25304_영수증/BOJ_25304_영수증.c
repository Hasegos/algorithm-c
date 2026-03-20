#include <stdio.h>

int main(){

    int X, N, a, b, num = 0;
    scanf("%d %d", &X, &N);

    for(int i = 0; i < N; i++){
        scanf("%d %d",&a , &b);
        num += (a * b);
    }
    if(X == num){
        printf("Yes");
    }else{
        printf("No");
    }
}