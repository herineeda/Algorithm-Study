#include <stdio.h>

int main() {

  int N,sum;
  
  scanf("%d",&N);
  
  for(int i=0;i<=N;i=i+2){

    sum = sum + i;
    
  
  }
  printf("%d",sum);
  return 0;
}
