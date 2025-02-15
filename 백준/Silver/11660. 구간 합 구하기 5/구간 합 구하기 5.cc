#include <stdio.h>

int main() {
    int num, t;
    scanf("%d %d", &num, &t);
    int arr[num][num];

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            int temp;
            scanf("%d", &temp);
            arr[i][j] = temp;
            if (i > 0) arr[i][j] += arr[i - 1][j];
            if (j > 0) arr[i][j] += arr[i][j - 1];
            if (i > 0 && j > 0) arr[i][j] -= arr[i - 1][j - 1];
        }
    }


    for (int i = 0; i < t; i++) {
        int x, y, x1, y1;
        scanf("%d %d %d %d", &x, &y, &x1, &y1);
        x -= 1;
        y -= 1;
        x1 -= 1;
        y1 -= 1;

        int sum = arr[x1][y1];
        if (x > 0) sum -= arr[x - 1][y1];
        if (y > 0) sum -= arr[x1][y - 1];
        if (x > 0 && y > 0) sum += arr[x - 1][y - 1];

        printf("%d\n", sum);
    }

    return 0;
}
