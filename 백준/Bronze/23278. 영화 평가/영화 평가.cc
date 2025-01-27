// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t,m1,m2;
    scanf("%d %d %d",&t,&m1,&m2);
    int score[t];
    int temp=0;
    double sum = 0.00 ;
    for(int i =0 ;i<t; i++){
        scanf("%d",&score[i]);
    }
    
    for(int j=0; j<t; j++){
        for(int k=0; k<t-1;k++){
            if(score[k]>score[k+1]){
                temp = score[k];
                score[k] = score[k+1];
                score[k+1] = temp;
            }
        }
    }
    if(m1 == 0 && m2 == 0){
        for(int i = 0 ; i < t; i++){
            sum += score[i];
        }
        printf("%.15lf",sum/t);
        return 0;
    }
    else{
        for(int i = m1 ; i < t-m2; i++){
            sum = sum + score[i];
    }
    }
    printf("%.15lf",sum/(t-(m1+m2)));
    return 0;
}