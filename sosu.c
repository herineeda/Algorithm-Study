#include <stdio.h>
 
int main() {
    //자연수 A
    int A;
    //약수의 갯수
    int count = 0;
    //반복문에서 사용할 변수
    int i;
    
    scanf("%d", &A);
    
    for (i = 1; i <= A; i++) {
        if (A % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}


