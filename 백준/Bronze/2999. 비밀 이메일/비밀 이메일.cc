// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char arr[100];
    scanf("%s",&arr);
    int k = 0 ;
    int count=0;
    int max=0;
    while(arr[k]){
        if(arr[k] != 0) {
            count++;
            k++;
            
        }
    }
    for(int i = 1 ; i <= 10; i++){
        if(count % i == 0 ){
            if(max < i ) {
                if(i <= count/i){
                max = i;
                }
            }
        }
    }

    
    int r = count/max;
    

    
    char ans[max][r];
    int index=0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<max; j++){
            ans[j][i] = arr[index];
            index++;
        }
        
    }
    
    for(int i=0; i<max; i++){
        for(int j=0; j<r; j++){
            printf("%c",ans[i][j]);
        }
    }
    

    
    
    return 0;
}