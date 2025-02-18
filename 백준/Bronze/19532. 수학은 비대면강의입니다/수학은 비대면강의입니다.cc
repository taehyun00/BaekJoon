#include <stdio.h>

int main() {
    int a, b, c, a1, b1, c1;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &a1, &b1, &c1);
    
    int x, y;
    int found = 0;

    for (x = -999; x <= 999; x++) {
        for (y = -999; y <= 999; y++) {
            if ((a * x + b * y == c) && (a1 * x + b1 * y == c1)) {
                printf("%d %d", x, y);
                found = 1;
                break;
            }
        }
        if (found) break;
    }


    return 0;
}
