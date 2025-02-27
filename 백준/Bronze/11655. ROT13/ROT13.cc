// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char arr[101];
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] != '\0'; i++) {
    int ch = arr[i];

    if ('A' <= ch && ch <= 'Z') {
        ch = (ch - 'A' + 13) % 26 + 'A'; 
    } else if ('a' <= ch && ch <= 'z') {
        ch = (ch - 'a' + 13) % 26 + 'a';
    }

    printf("%c", ch);
}
    return 0;
}