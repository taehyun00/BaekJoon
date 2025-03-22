// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int ta=0,tb=0;
    for(int i = 0 ; i< 3; i++){
        ta = ta*10 + a%10;
        tb = tb*10 + b%10;
        a /=10;
        b /=10;
    }
    printf("%d", ta>tb ? ta:tb);
    return 0;
}