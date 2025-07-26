// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   int arr[a+b];
   
   int n =a + b;

   for(int i = 0 ; i < a; i ++){
       scanf("%d",&arr[i]);

   }
   for(int j = 0; j<b; j++){
       scanf("%d",&arr[a+j]);
   }

    qsort(arr, n, sizeof(int), compare);
    
    for(int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}