// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int k,d,a;
   char nul,nul1,nul2;
   scanf("%d%c%d%c%d",&k,&nul,&d,&nul1,&a,&nul2);
   if(k+a < d || d == 0) printf("hasu");
   else printf("gosu");
    return 0;
}