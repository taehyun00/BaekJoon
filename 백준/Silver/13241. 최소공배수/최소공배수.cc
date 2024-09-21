#include<stdio.h>
int gcd(long long int a,long long int b){
    long long int c;
    while(a%b !=0){
            c=a%b;
            a=b;
            b=c;
        }
    return b;
}
int main(){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int num = gcd(a,b);
    printf("%lld",a*b/num);
    }
