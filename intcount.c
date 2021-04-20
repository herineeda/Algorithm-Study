#include <stdio.h>

int main()
{
 //[1] Input
 int A,B,C;
 int intCount =0;
 int i;
 
 scanf("%d %d %d",&A,&B,&C);
 
//[2] Process
 for(i=A;i<=B; i++)
 {
  if(i%C==0)
  {
    
   intCount++;
  }
 }

 //[3] Output
 printf("%d\n", intCount);
return 0;
}
