// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    if(n == 1 ) {
        printf("4");
        return 0;
        }
    else{
        printf("%lld",n*4);
    }

    return 0;
}