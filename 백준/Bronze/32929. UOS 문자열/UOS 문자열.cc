// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    switch(num%3){
        case 1:
            printf("U");
            return 0;
        case 2:
            printf("O");
            return 0;
        case 0:
            printf("S");
            return 0;
    }

    return 0;
}