// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int l=1;
    
    while(num > l){
        num -= l;
        l += 1;
    }
    int a=0,b=0;
    
    if(l%2 == 0 ){
        a = num;
        b = l - num + 1 ;
    }
    else{
        a =  l - num + 1 ;
        b = num;
    }
    
    printf("%d/%d",a,b);
    return 0;
}