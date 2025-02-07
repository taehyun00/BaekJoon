// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,t;
    scanf("%d %d",&num,&t);
    int arr[num];
    int start,end,sum=0;
    for(int i=0; i<num; i++){
        int temp;
        scanf("%d",&temp);
        arr[i] = arr[i-1] + temp;
    }
    
    for(int i = 0; i<t; i++){
        scanf("%d %d",&start,&end);
        printf("%d\n",arr[end-1] - arr[start-2]);
    }
    

    return 0;
}