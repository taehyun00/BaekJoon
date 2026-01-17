// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=0;
    for(int i = 0 ; i<c; i++){
        int h;
        scanf("%d",&h);
        if(a<= h && h<=b) sum++;
    }
    printf("%d",sum);

    return 0;
}