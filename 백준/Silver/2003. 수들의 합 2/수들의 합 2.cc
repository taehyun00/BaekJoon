// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,goal;
    scanf("%d %d",&num,&goal);
    int number[num];
    int sum=0,count=0;
    for(int i=0; i<num; i++){
        scanf("%d",&number[i]);
    }
    for(int i=0; i<num; i++){
        for(int j = i; j<num; j++){
            sum+= number[j];

            if(sum == goal){

                count++;
                sum = 0 ;
                break;
            }
            else if(sum > goal){
                sum = 0 ;
                break;
            }
        }
        if(sum < goal){
            sum = 0;
        }
    }
    printf("%d",count);
    return 0;
}