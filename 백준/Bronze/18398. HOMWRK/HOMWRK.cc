// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i < num; i++){
        int c;
        scanf("%d",&c);
        for(int j=0; j<c; j++){
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d %d\n",a+b,a*b);
        }
    }

    return 0;
}