#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char arr[n][m];

    // 입력 받기 (공백 제거)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    // 90도 회전하여 출력
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == '.') printf(".");
            if (arr[j][i] == 'O') printf("O");
            if (arr[j][i] == '-') printf("|");
            if (arr[j][i] == '|') printf("-");
            if (arr[j][i] == '/') printf("\\");
            if (arr[j][i] == '\\') printf("/");
            if (arr[j][i] == '>') printf("^");
            if (arr[j][i] == '^') printf("<");
            if (arr[j][i] == 'v') printf(">");
            if (arr[j][i] == '<') printf("v");

        }
        printf("\n");
    }

    return 0;
}
