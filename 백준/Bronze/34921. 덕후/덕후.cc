// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a ,b ;
    scanf("%d %d",&a,&b);
    int num = 10 + 2 * (25 - a + b );
    if(num <= 0 ) printf("0");
    else printf("%d",num);

    return 0;
}