// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int sum=0;
    int arr[11];
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;  i<10; i++){
    if((sum + arr[i])>100){
            if((sum+arr[i]) - 100 > (100 - sum)){
                printf("%d",sum);
                return 0;
            } 
            else if((sum+arr[i]) - 100 <(100 - sum)){
                printf("%d",sum+arr[i]);
                return 0;
            }
            else if((sum+arr[i])-100 == (100 - sum)){
                printf("%d",sum+arr[i]);
                return 0;
            }
            
        }
        sum += arr[i];
    }
    if(sum<100){
        printf("%d",sum);
    }
    return 0;
}