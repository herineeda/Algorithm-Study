#include <stdio.h>

int main() {

  int N;
  
  scanf("%d", &N);
  
  if (N<=5000){
    if(N%4==0 && N%100!=0){
      printf("YES");
    }
    
    else if(N%400==0){
      
      printf("YES");
      
    }
    else{
  printf("NO");
}
  }


  return 0;
}
