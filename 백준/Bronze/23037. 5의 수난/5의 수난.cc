// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char num[5];
    int sum = 0;
    int number = 0;
    int flag;
    for(int i = 0; i<5; i++){
        scanf("%c",&num[i]);
        number = num[i] - '0';
        flag = number;
        
        for(int j=0; j<4; j++){
            number = number * flag;
        }
        sum += number;
        number = 0;
    }
    printf("%d",sum);
    return 0;
}