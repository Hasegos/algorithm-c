#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int result_1 = (a + b) %c;    
    int result_2 = ((a % c) + (b % c)) % c;
    int result_3 = (a * b) %c;
    int result_4 = ((a % c ) * (b % c)) % c;

    printf("%d\n%d\n%d\n%d", result_1 , result_2 , result_3 , result_4);
}