#include <stdio.h>

int main() {
    int n, m, zr, zc;
    scanf("%d %d %d %d", &n, &m, &zr, &zc);
    
    char arr[n][m];

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int h = 0; h < zr; h++) {
            for (int j = 0; j < m; j++) {
                for (int q = 0; q < zc; q++) {
                    printf("%c", arr[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
