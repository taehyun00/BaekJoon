#include<stdio.h>
int main(){
    int num;
    int sum=0; 
    for(int i = 0; i < 5; i++){
        scanf("%d",&num);
        if(num<40){
            sum = sum + 40 ;
        }
        else sum = sum + num;
    }
    printf("%d", sum/5);
}