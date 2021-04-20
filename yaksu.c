#include stdio.h

int main() {

 int N,K,i,counter,search;
 
 scanf(%d %d,&N,&K);
 
 for(int i=1;i=N;i++){
   
   if(N%i == 0){
     
     counter++;
     약수인 것 구하기
     
     if(counter == K){
       search = i;
       break;
     }
   }
   
 }
 
 printf(%d, search);

  return 0;
}
