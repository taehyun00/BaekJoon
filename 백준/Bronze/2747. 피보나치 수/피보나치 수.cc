// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int fibo[46] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,};
   for(int i = 18; i<=45; i++){
       fibo[i] = fibo[i-1] + fibo[i-2];
   }
   
   int n;
   scanf("%d",&n);
   printf("%d",fibo[n]);
    return 0;
}