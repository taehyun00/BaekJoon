// Online C compiler to run C program online
#include <stdio.h>
int fac(int num){
    int sum = 1;
    for(int i =1; i<=num; i++){
        sum *= i;
    }
    return sum;
}
int main() {

    int n,m;
    int count = 0;
    scanf("%d %d",&n,&m);
    count = fac(n)/(fac(m)*fac(n-m));
    printf("%d",count);
    return 0;
}