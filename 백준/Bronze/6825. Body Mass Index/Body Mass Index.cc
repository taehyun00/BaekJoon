// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    float b;
    scanf("%d %f",&a,&b);
    float num = a/(b*b);
    if(num > 25) printf("Overweight");
    else if(num <= 25 && num >= 18.5) printf("Normal weight");
    else if(num < 18.5) printf("Underweight");
    return 0;
}