// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,k;
    scanf("%d %d",&num,&k);
    int arr[num];
    int max=0;
    for(int i = 0 ; i < num ; i++){
        scanf("%d",&arr[i]);
    }  
    int f=0;
    for(int q=0; q<k; q++){
        f += arr[q];
    }
    
    max = f;
    
    for(int j = k; j<num; j++){
        f = f - arr[j-k] + arr[j];
        if(f>max) max = f;
    }
    
    printf("%d",max);
    return 0;
}