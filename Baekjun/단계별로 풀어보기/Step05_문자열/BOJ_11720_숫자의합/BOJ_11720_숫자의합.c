#include <stdio.h>
#include <string.h>

int main(){
  int N, sum = 0;
  scanf("%d",&N);
  char c[N + 1];
  
  scanf("%s",c); 
  
  for(int i = 0; i < N; i++){    
    sum += (c[i] - 48);
  }
  
  printf("%d",sum);  
}