#include <stdio.h>

int main() {
    int X, Y, P1, P2;
    scanf("%d %d %d %d", &X, &Y, &P1, &P2);

   
    for (int i = 0; i <= 10000; i++) { 
        int a_pos = P1 + i * X;
        if (a_pos < P2) continue; 


        if ((a_pos - P2) % Y == 0) {
            printf("%d\n", a_pos);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
