#include <stdio.h>

int main(){

  int N, M,i, j, change = 0;
  scanf("%d %d",&N, &M);
  int arr[N];

  for(int a = 0; a < N; a++){
    arr[a] = a + 1;
  }
  for(int b = 0; b < M; b++){
    scanf("%d %d",&i, &j);

    for(int c = 0; c <= (j - i) / 2; c ++ ){
        change = arr[i - 1 + c];
        arr[i - 1 + c] = arr[j - 1 - c] ;
        arr[j - 1 - c] = change;        
    }
  }
  for(int d = 0; d < N; d++){
    printf("%d ", arr[d]);
  }
}