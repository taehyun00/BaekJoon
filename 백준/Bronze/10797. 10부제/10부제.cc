// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,n,count=0;
    scanf("%d",&num);
    for(int i = 0 ; i < 5 ; i ++){
        scanf("%d",&n);
        if(n == num) count++;
    }
    printf("%d",count);
}