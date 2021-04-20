#include <stdio.h>

int main() {

  int N,M;
  int cnt;
  scanf("%d %d", &N,&M);
  
  for (int i=N;i<=M;i++){
    
    printf("%d ",i);
    
    cnt++;
    if(cnt%8==0) printf("\n");
    
  }
  
  return 0;
}
