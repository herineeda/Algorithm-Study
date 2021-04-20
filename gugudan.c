#include <stdio.h>

int main() {

  int N,total;
  
  scanf("%d",&N);
  
  
  
  for(int i=1;i<10;i++){
    
    total = N*i;
  
  printf("%d*%d=%d\n",N,i,total);
  }

  return 0;
}
