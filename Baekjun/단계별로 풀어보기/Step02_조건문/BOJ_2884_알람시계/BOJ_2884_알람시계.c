#include <stdio.h>

int main(){

    int H,M;
    scanf("%d %d",&H, &M);
    if(M < 45){
        M = M + 15;
        if(H == 0){ 
            H = 23;
            printf("%d %d", H , M);
        }
        else {
            H = H - 1;
            printf("%d %d", H , M);
        }
    }
    else { 
        printf("%d %d", H , M - 45);
    }
}