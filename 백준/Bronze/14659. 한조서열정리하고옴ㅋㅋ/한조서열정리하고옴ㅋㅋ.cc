// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int max = 0;
    int arr[num];
    for (int i = 0 ; i < num ; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=0; j< num; j++){
        int count = 0 ;
        
        for(int k=j+1; k<num; k++){
            if(arr[j] > arr[k]) count++;
            else if(arr[j] < arr[k]) break;
        }
        if(max < count) max = count;
        
        
    }
    printf("%d",max);

    return 0;
}