// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a*b < c){
        printf("0");
        return 0;
    }
    printf("%d",a*b - c);

    return 0;
}