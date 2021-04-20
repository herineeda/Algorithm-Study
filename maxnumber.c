#include <stdio.h>

int main() {

int a,b,c;
int max;

scanf("%d %d %d",&a,&b,&c);

  if(a>=b && a>=c){
    max = a;
    
    if(b>=c)
    max = a;
    
    else
    
    max = a;
    
  }
  
  else if(b>=a&& b>=c){
    max = b;
    
    if (a>=c){
      max = b;
    }
    
    else {
      max = b;
    }
  }
    else {
      max = c;
      
      if(a>=b){
        max = c;
      }
      else{
        max = c;
      }
  }

printf("%d", max);

  return 0;
}
