#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    int total_seconds1, total_seconds2, remaining_seconds;

    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    total_seconds2 = h2 * 3600 + m2 * 60 + s2;

    if (total_seconds2 < total_seconds1) {
        total_seconds2 += 24 * 3600;
    }

    remaining_seconds = total_seconds2 - total_seconds1;

    printf("%02d:%02d:%02d\n", remaining_seconds / 3600, (remaining_seconds % 3600) / 60, remaining_seconds % 60);

    return 0;
}
