// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    
    int arr[3] = {1,0,0};
    
    for(int i = 0; i < num ; i ++){
        int a,b;
        scanf("%d %d",&a,&b);
        int temp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = temp;

    }
    if(arr[0] == 1 ) printf("1");
    else if(arr[1] == 1) printf("2");
    else if(arr[2] == 1) printf("3");
    else printf("-1");

    return 0;
}