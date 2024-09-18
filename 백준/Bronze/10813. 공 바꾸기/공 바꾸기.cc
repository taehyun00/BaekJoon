// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr,num;
    int n1,n2,temp=0;
    scanf("%d %d",&arr,&num);
    int qur[arr];
    for(int i = 0; i < arr; i++){
        qur[i] = i+1;
    }
    for(int j = 0; j<num; j++){
        scanf("%d %d",&n1,&n2);
        n1 = n1-1;
        n2 = n2-1;
        temp = qur[n2];
        qur[n2] = qur[n1];
        qur[n1] = temp;
    }
    
    for(int k = 0; k <arr; k++){
        printf("%d ",qur[k]);
    }
    

    return 0;
}