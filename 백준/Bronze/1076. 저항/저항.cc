#include <stdio.h>
#include <string.h>

int main() {
    char color[10];
    long long int sum = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s", color);

        if (i == 0) {
            if (strcmp(color, "black") == 0)
                sum = sum * 10;
            else if (strcmp(color, "brown") == 0)
                sum = (sum + 1) * 10;
            else if (strcmp(color, "red") == 0)
                sum = (sum + 2) * 10;
            else if (strcmp(color, "orange") == 0)
                sum = (sum + 3) * 10;
            else if (strcmp(color, "yellow") == 0)
                sum = (sum + 4) * 10;
            else if (strcmp(color, "green") == 0)
                sum = (sum + 5) * 10;
            else if (strcmp(color, "blue") == 0)
                sum = (sum + 6) * 10;
            else if (strcmp(color, "violet") == 0)
                sum = (sum + 7) * 10;
            else if (strcmp(color, "grey") == 0)
                sum = (sum + 8) * 10;
            else if (strcmp(color, "white") == 0)
                sum = (sum + 9) * 10;
        } else if (i == 1) {
            if (strcmp(color, "black") == 0)
                sum = sum + 0;
            else if (strcmp(color, "brown") == 0)
                sum = sum + 1;
            else if (strcmp(color, "red") == 0)
                sum = sum + 2;
            else if (strcmp(color, "orange") == 0)
                sum = sum + 3;
            else if (strcmp(color, "yellow") == 0)
                sum = sum + 4;
            else if (strcmp(color, "green") == 0)
                sum = sum + 5;
            else if (strcmp(color, "blue") == 0)
                sum = sum + 6;
            else if (strcmp(color, "violet") == 0)
                sum = sum + 7;
            else if (strcmp(color, "grey") == 0)
                sum = sum + 8;
            else if (strcmp(color, "white") == 0)
                sum = sum + 9;
        } else {
            if (strcmp(color, "black") == 0)
                sum = sum * 1;
            else if (strcmp(color, "brown") == 0)
                sum = sum * 10;
            else if (strcmp(color, "red") == 0)
                sum = sum * 100;
            else if (strcmp(color, "orange") == 0)
                sum = sum * 1000;
            else if (strcmp(color, "yellow") == 0)
                sum = sum * 10000;
            else if (strcmp(color, "green") == 0)
                sum = sum * 100000;
            else if (strcmp(color, "blue") == 0)
                sum = sum * 1000000;
            else if (strcmp(color, "violet") == 0)
                sum = sum * 10000000;
            else if (strcmp(color, "grey") == 0)
                sum = sum * 100000000;
            else if (strcmp(color, "white") == 0)
                sum = sum * 1000000000;
        }
    }

    printf("%lld", sum);

    return 0;
}
