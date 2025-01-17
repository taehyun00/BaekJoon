// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if (n >= m) {
        
        printf("0");
        return 0;
    }
    long long int res = 1;
    for(long long int i = 1; i<=n; i++){
        res = (res*i)%m;
    } 
    printf("%lld",res );
    return 0;
}