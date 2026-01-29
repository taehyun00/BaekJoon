// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int count = 0;
    
    char arr[1000001];
    scanf("%s",arr);
    while(1){
        if(arr[0] != arr[count]){
            break;
        }
        else count++;
    }
    printf("%d",count);

    return 0;
}