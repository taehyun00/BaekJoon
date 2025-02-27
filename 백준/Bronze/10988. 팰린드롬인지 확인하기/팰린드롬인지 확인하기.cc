#include <stdio.h>
#include <string.h>

int ispalandrom(char* mystr1) {
    int len = strlen(mystr1); 
    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (mystr1[i] != mystr1[len - 1 - i]) {
            flag = 0;  
            break;     
        }
    }

    return flag;
}

int main() {
    char mystr1[256];
    scanf("%s", mystr1); 
    if (ispalandrom(mystr1)) { 
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
