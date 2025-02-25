#include <stdio.h>

int G(int a, int b) {
    if (b == 0) return a;
    else return G(b, a % b);
}


int main() {
    int test,a,b,gcd;
    scanf("%d",&test);
    int ans[test];
    int ans1[test];
    for(int i=0; i<test; i++){
        scanf("%d %d",&a,&b);
        int min = a>b ? b:a;
        int count = 0;
        for (int i = 1; i <= a || i <= b; ++i) {
            if (a % i == 0 && b % i == 0){
                gcd = i;
            }
        }
        ans[i]= (a * b) / gcd;
        count = G(a,b);
        ans1[i] = count;
    }
    for(int i = 0; i<test; i++){
        printf("%d %d\n",ans[i],ans1[i]);
    }
}
