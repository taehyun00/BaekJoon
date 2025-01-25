// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    int score = 0 ;
    scanf("%d",&t);
    int num[t];
    int num1[t];
    int sum = 0 ;
    for(int i = 0 ; i<t; i++){
        scanf("%d",&num[i]);
    }
    
    for(int i =0 ; i<t; i++){
        if(num[i] == 1){
            score += 1;
            num1[i] = score;
        }
        else if (num[i] == 0){
            score = 0;
            num1[i] = score;
        }

        
    }
    for(int i = 0 ; i<t; i++){
       sum += num1[i];
    }
    printf("%d",sum);
    return 0;
}