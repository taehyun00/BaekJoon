#include <stdio.h>

int main() {
    long long int a,b;
    long long int sum = 0 ;
    scanf("%lld %lld",&a,&b);
    sum = (a>b) ? (a+b)*(a-b+1)/2 :(a+b)*(b-a+1)/2;
    printf("%lld",sum );
    return 0;
}