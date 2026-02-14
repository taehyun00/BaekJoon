// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int flag=0;
    if(a>= 1000 && (b>=8000 || c>=260 )) printf("Very Good");
    else if(a>= 1000 && (b<8000 || c<260 )) printf("Good");
    else printf("Bad");

    return 0;
}