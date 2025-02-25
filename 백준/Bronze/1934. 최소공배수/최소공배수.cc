#include <stdio.h>
int main() {
    int test,a,b,gcd;
    scanf("%d",&test);
    int ans[test];
    for(int i=0; i<test; i++){
        scanf("%d %d",&a,&b);
        for (int i = 1; i <= a || i <= b; ++i) {
            if (a % i == 0 && b % i == 0){
                gcd = i;
            }
        }
        ans[i]= (a * b) / gcd;
    }
    for(int i = 0; i<test; i++){
        printf("%d\n",ans[i]);
    }
}
