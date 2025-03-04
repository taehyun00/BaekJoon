// Online C compiler to run C program online
#include <stdio.h>

int main() {
    unsigned long long int n;
    scanf("%llu",&n);
    
    unsigned long long int res = (n*(n-1)*(n+1)/2);
    printf("%llu",res);

    return 0;
}