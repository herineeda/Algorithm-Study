#include <stdio.h>

int main() {

  int s,N,result;
  
  scanf("%d",&N);
  
  for(int i=0;i<=100;i++){
    
    result = i*i;
    s=i-1;
    
    if(s*s<N && result>=N){
    printf("%d ",i);
    }
  }
    
  

  return 0;
}
