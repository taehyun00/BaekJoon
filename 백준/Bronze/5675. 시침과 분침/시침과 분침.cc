#include<stdio.h>
int main(){
    int num;
    while(scanf("%d",&num) != EOF){
        if(num == 0) printf("Y\n");
        else if(num%6 == 0)printf("Y\n");
        else printf("N\n");
    }
    
    return 0;
}