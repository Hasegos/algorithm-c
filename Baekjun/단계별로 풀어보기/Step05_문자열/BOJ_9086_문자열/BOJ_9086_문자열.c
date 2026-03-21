#include <stdio.h>
#include <string.h>

int main(){
  int T;
  char S[1001];
  
  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    scanf("%s",S);      

    int num = 0;
    num = strlen(S) - 1;
    printf("%c%c\n",S[0], S[num]);    
  } 
}