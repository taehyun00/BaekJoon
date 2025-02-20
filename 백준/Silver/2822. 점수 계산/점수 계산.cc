// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[9];
    int ans[9];
    int in[5];
    for(int i = 0; i<8; i++){
        scanf("%d",&arr[i]);
        ans[i] = arr[i];
    }
    int temp=0;
    int sum=0;
    for(int k=0; k<7; k++){
        for(int t=0; t<7; t++){
            if(arr[t] < arr[t+1]){
                temp = arr[t+1];
                arr[t+1] = arr[t];
                arr[t] = temp;
            }
        }
    }
    for(int q=0; q<5; q++){
        for(int w=0; w<8; w++){
            if(arr[q] == ans[w]){
                in[q] = w;
            }
        }
        sum += arr[q];
        
    }
    for(int j=0; j<4; j++){
        for(int c=0; c<4; c++){
            if(in[c] > in[c+1]){
                temp = in[c+1];
                in[c+1] = in[c];
                in[c] = temp;
            }
        }
    }
    printf("%d\n",sum);
    for(int i=0; i<4; i++){
        printf("%d ",in[i]+1);
    }
    printf("%d",in[4]+1);
    return 0;
}
