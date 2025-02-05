// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int ch[num];
    int arr[101];
    int count=0;
    for(int i = 0; i < 101; i++){
        arr[i] = 0;
    }
    
    for(int i = 0 ; i < num; i++){
        scanf("%d",&ch[i]);

        if(arr[ch[i]] == 0)arr[ch[i]] = ch[i];
        
        else if(arr[ch[i]] != 0 ) count++;
    }
    printf("%d",count);
    return 0;
}