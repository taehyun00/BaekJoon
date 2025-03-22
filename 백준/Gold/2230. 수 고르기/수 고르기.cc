// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    long long int num,n;
    scanf("%lld %lld",&num,&n);
    long long int arr[num];
    for(int i = 0 ; i < num; i++){
        scanf("%lld",&arr[i]);
    }
    qsort(arr, num, sizeof(long long int), compare);
    int start=0,end=0;
    long long int min=2000000001;
    while(1){
        
        if(end == num){
            break;
        }
        long long int diff = (arr[end] - arr[start]);

        if (diff < n) {
            end++;
        } 
        else if(diff >= n ){
            if (diff < min) {
                min = diff;
            }
            start++;
            
        }
    }
    printf("%lld",min);
    

    return 0;
}