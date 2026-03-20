#include <stdio.h>

int main(){

    int N,num = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        num += i;    
    }
    printf("%d", num);
}
