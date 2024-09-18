#include <stdio.h>

int aura(int power, int count) {
    if (count == 0) return power; 
    
    int a1 = power / 2;
    int a2 = power - a1;


    return power + aura(a1, count - 1) + aura(a2, count - 1);
}

int main() {
    int power, order;
    scanf("%d %d", &power, &order);
    
    int result = aura(power, order);
    
    printf("%d\n", result);
    
    return 0;
}