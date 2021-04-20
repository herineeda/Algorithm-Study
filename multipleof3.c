#include <stdio.h>

int main() {
  
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    
    if(i%3 == 0)
    printf("X ");
    else
    printf("%d ",i);
    
    //3의 배수에서 X 출력
  }

  return 0;
}
