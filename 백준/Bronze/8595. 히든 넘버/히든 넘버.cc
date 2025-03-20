// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int sizes;
    scanf("%d",&sizes);
    char arr[sizes];
    scanf("%s",arr);
    int len = strlen(arr);
    long long int num=0,sum=0;
    int isnum = 0;
    for(int i = 0; i < len; i++){
        if('0' <= arr[i] && arr[i] <= '9'){
            if(isnum){
                num *=10;
                num += (arr[i]-48 );
            }
            else{
            num += arr[i] - 48;
            }
            isnum = 1;
        }
        else{
            if (isnum) {
                sum += num;
                num = 0;
            }
            isnum = 0;
        }
    }
    if(isnum){
        sum += num;
    }
    printf("%lld",sum);
    return 0;
}