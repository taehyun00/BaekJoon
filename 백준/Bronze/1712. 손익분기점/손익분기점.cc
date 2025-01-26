// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    long long int count = 1 ;
    scanf("%d %d %d",&a,&b,&c);
    if(b>=c){
        printf("-1");
        return 0;
    }
    else{
        printf("%d",a/(c-b)+1);
    }
   
    return 0;
}