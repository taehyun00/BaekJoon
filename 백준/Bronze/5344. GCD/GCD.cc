#include <stdio.h>

int main() {
    int a,b,gcd;
    int num;
    scanf("%d",&num);
    for(int i = 0; i<num; i++){
    scanf("%d %d",&a,&b);
    for (int i = 1; i <= a || i <= b; ++i) {
        if (a % i == 0 && b % i == 0){
                gcd = i;
        }
    }  
    printf("%d\n",gcd);
    }
}
