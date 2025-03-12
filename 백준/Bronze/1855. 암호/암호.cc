// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    int num;
    scanf("%d",&num);
    
    char arr[201];
    scanf("%s",arr);
    int m = strlen(arr);
    
    char arr1[m/num][num];
    
    int count = 0 ;
    for(int i = 0 ; i < m/num; i++){
        if( i%2 == 0 ){
        for(int j = 0; j<num; j++ ){
            arr1[i][j] = arr[count];
            count++;
        }
        }
        else if(i%2 == 1 ){
            for(int j = num-1; j >= 0 ; j-- ){
            arr1[i][j] = arr[count];
            count++;
        }
            
        }
    }
    
    for(int j = 0; j < num; j++) {
        for(int i = 0; i < m/num; i++) {
            printf("%c", arr1[i][j]);
        }
    }

    return 0;
}