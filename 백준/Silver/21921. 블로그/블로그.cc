// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,k;
    scanf("%d %d",&num,&k);
    int arr[num];
    int max=0;
    int count = 0;
    for(int i = 0 ; i < num ; i++){
        scanf("%d",&arr[i]);
    }  
    int f=0;
    for(int q=0; q<k; q++){
        f += arr[q];
    }
    
    max = f;
    count++;
    
    for(int j = k; j<num; j++){
        if(j == num){
            f = f - arr[j-k] + arr[j];
        }
        else f = f - arr[j-k] + arr[j];
        
        if(f == max)count++;
        else if(f>max){
            max = f;
            count = 1;
        }
    }
    if(max == 0 ){
        printf("SAD");
        return 0;
    }  
    printf("%d\n%d",max,count);
    
    return 0;
}