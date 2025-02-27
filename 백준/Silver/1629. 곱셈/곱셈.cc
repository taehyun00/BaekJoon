#include <stdio.h>

int it(long long int a,long long int n, long long int mod) {
    long long int  result = 1;
    while (n > 0) {
       
        if (n % 2 == 1) {
            result = (result * a) % mod; 
            n -= 1;
        }
        
        a = (a * a) % mod; 
        n /= 2;
    }
    return result;
}

int main() {
    long long int  a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    printf("%lld", it(a, b, c));
    return 0;
}
