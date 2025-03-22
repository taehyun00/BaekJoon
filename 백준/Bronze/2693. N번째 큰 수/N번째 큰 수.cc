// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i<t; i++){
        
        int arr[10];
        for(int j=0; j< 10; j++){
            scanf("%d",&arr[j]);
        } 
        qsort(arr, 10, sizeof(int), compare);
        
        printf("%d\n",arr[7]);
        
    }
    return 0;
}