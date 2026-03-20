#include <stdio.h>

int main(){

    int A,B,C;
    scanf("%d %d %d",&A, &B, &C);
    if(B + C > 59){        
        if(A == 23){         
            A = (A + ((B + C) / 60)) % 24;
            B = (B + C) % 60;
            printf("0 %d", B);
        }
        else {
            A = A + ((B + C) / 60);
            B = (B + C) % 60;

            if(A > 23){
                A = A % 24;
                printf("%d %d", A , B );
            }
            else{
                printf("%d %d", A, B);
            }                
        }
    }
    else {
        printf("%d %d", A , B + C);
    }
}