#include <stdio.h>

int main() {

  int A,B,C,D;
  int count;
  int i;
for(i=0;i<3;i++){  
  scanf("%d %d %d %d",&A,&B,&C,&D);

  
  count = A+B+C+D;
  
  if(count==3)
  printf("A\n");
  
  else if(count==2)
  printf("B\n");
  
  else if(count==1)
  printf("C\n");
  
  else if(count==0)
  printf("D\n");
  
  else if(count==4)
  printf("E\n");
}
  return 0;
}
