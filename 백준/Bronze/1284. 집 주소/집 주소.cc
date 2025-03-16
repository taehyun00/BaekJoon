// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    
    while(scanf("%d",&num) != 0){
        if(num == 0){
            return 0;
        }
    int temp = 1;
    int sum = 0;
    while(num > 0){
        temp = num%10;
        switch(temp){
            case 0:
                sum +=4;
                break;
            case 1:
                sum +=2;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                sum += 3;
                break ;
        
        } 
        sum++;
        num = num/10;
    }
    printf("%d\n",sum+1);
    }
    return 0;
}