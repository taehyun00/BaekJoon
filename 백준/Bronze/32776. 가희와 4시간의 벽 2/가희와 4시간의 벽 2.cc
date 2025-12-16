// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b1,b2,b3;
    scanf("%d %d %d %d",&a,&b1,&b2,&b3);
    (a <= b1+b2+b3) || (a <= 240) ? printf("high speed rail") : printf("flight");
    return 0;
}