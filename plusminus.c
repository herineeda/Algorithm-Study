#include <stdio.h>

int main() {

  int A,B;
  int odd,even;
  
  scanf("%d %d",&A,&B);
  
  for(int i=A;i<=B;i++){
    
    if(i%2 == 0)
    
    even -= i;
    
    
    else
      
      odd += i;}
  
  printf("%d",even+odd);
  return 0;
}
