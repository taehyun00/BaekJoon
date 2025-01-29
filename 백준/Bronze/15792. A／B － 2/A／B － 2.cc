#include<stdio.h>
int main(){
    int a,b;
    int c=0,d=0;
    scanf("%d %d",&a,&b);
    if(a%b == 0){
        printf("%d",a/b);
        return 0;
    }
    else{
        printf("%d.",a/b);
        if(a/b != 0) a -= b*(a/b);
        for(int i=0; i<1501; i++){
            a*=10;
            d = a/b;
            printf("%d",d);
            a = a-b*d;
        }
    }
    return 0;
}