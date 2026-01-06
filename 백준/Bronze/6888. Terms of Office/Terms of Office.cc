// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int year = X; year <= Y; year++) {
        if ((year - X) % 60 == 0) {
            printf("All positions change in year %d\n", year);
        }
    }

    return 0;
}
