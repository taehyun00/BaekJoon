// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        int arr[11]={0,};
        int num;
        int count = 0;

        scanf("%d",&num);
        
        for(int j=0; num>0; j++){
            arr[num%10] = num%10 + 1;
            num = num/10;
        }
        
        for(int i = 0; i<11; i++){
            if(arr[i] != 0 )count++;
        }
        
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}