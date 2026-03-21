#include <stdio.h>

int main(){
  int num;
  char S[1001];
  
  scanf("%s",S);
  scanf("%d",&num);

  printf("%c",S[num-1]);  
}