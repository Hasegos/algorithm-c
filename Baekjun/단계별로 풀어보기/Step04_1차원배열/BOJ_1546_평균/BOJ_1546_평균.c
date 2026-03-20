#include <stdio.h>

int main(){
  int N,a,max = 0;
  double aver = 0;
  scanf("%d",&N);  
  int arr[1000];

  for(int i = 0; i < N; i++){
    scanf("%d", &a);   
    arr[i] = a;

    if(max < arr[i]){
        max = arr[i];
    }
  }
  

  for(int i = 0;  i < N; i++){    
    aver += (((double)arr[i] / max) * 100);    
  }  
  printf("%f",aver / N);
}