#include <stdio.h>
#include <string.h>

int main(){
  char S[100];
  scanf("%s",S);
  int a = 0;
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int num[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};  
  
  for(int i = 0; i < strlen(S); i++){
    for(int j = 0; j < 26; j ++){
      if(alphabet[j] == S[i]){
        if(num[j] != -1){
          break;
        }
        num[j] = i;
      }    
    }     
  }
  for(int k = 0; k < 26; k++){
    printf("%d ", num[k]);
  } 
}