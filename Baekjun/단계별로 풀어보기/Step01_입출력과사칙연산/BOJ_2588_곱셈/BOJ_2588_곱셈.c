#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    int result_1 = a * (b % 10);
    int result_2 = a * ((b % 100 ) / 10);
    int result_3 = a * (b / 100);
    
    printf("%d\n%d\n%d\n%d", result_1 , result_2 , result_3 , result_1 + (result_2 * 10) + (result_3 * 100));
}