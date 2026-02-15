// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        long long n, m;
        scanf("%lld %lld", &n, &m);

        long long result = (m - n + 1) * (n + m) / 2;

        printf("Scenario #%d:\n%lld\n\n", i+1, result);
    }

    return 0;
}
