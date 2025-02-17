// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,n1,n2;
    scanf("%d %d %d",&n,&n1,&n2);
    int max = n+n1+n2;
    int count=0,index=0;
    int arr[max+1];
    for(int i = 0; i<=max; i++){
        arr[i] = 0;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n1; j++){
            for(int k=1; k<=n2; k++){
                arr[i+j+k]++;
              
            }
        }
    }
    for(int q=1; q<=max; q++){

        if(arr[q]>count){

            count = arr[q];
            index = q;

        }
        if(arr[q] == count){
            if(index>q){
                index = q;
            }
            else{
                continue;
            }
        }
    }
    printf("%d",index);
    return 0;
}