#include <stdio.h>

int main() {
    long long int num;
    long long int sum = 0;
    int count = 0;

    scanf("%lld", &num);

    while (sum + (count + 1) <= num) { 
        count++;
        sum += count;
    }

    printf("%d\n", count);
    return 0;
}
