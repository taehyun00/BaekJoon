// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int sum=0;
    while(1){
        scanf("%d",&num);
        if(num == 0){
            return 0;
        }
        rep:
        while(num > 0){
        sum += num%10;
        num = num/10;
        }  
        if(sum > 9 ){
            num = sum;
            sum = 0;
            goto rep;
        }
        printf("%d\n",sum);
        sum = 0;
        num = 0;
    }
    return 0;
}