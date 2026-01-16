// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,t;
    scanf("%d %d",&num,&t);
    int sum=0;
    
    for(int i = 0 ; i< t ; i ++){
        int k;
        scanf("%d",&k);
        sum+=k;
    }
    
    if(num <= sum){
        printf("Padaeng_i Happy");
        return 0;
    }
    else printf("Padaeng_i Cry");

    return 0;
}