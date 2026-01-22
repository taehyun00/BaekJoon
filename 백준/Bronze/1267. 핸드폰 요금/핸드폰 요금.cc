// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int a=0,b=0;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        int s;
        scanf("%d",&s);
        a+=10*(s/30);
        if((s%30)<30) a+=10;
        b+=15*(s/60);
        if((s%60)<60) b+=15;
   
        
    }
    if(a==b){
        printf("Y M %d",a);
    }
    else if(a>b){
        printf("M %d",b);
    }
    else{
        printf("Y %d",a);
    }

    return 0;
}