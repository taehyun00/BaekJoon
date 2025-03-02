// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    int ans[num];
    for(int i = 0 ; i < num; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num; i++){
        scanf("%d",&ans[i]);
    }
    int temp=0;
    for(int i = 0 ; i < num; i++){
        for(int j =0 ; j<num-1; j++){
            if(arr[j]<=arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = 0;
    for(int i = 0 ; i < num; i++){
        for(int j =0 ; j<num-1; j++){
            if(ans[j]>=ans[j+1]){
                temp = ans[j+1];
                ans[j+1] = ans[j];
                ans[j] = temp;
            }
        }
    }
    int sum = 0 ;
    for(int i = 0 ; i < num; i++){
        sum += arr[i] * ans[i];
    }
    printf("%d",sum);
    return 0;
}