// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    double b;
    scanf("%d %lf",&a,&b);
    double sum = 0;
    sum = a/b;
    
    printf("%.1001lf",sum);

    return 0;
}