// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5];
    for(int i = 0 ; i <5; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<5; j++){
        for(int k=0; k<4; k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            for(int l=0 ; l<5 ; l++){
             printf("%d ",arr[l]);
                }
            printf("\n");
            }
        }
    }
    

    return 0;
}