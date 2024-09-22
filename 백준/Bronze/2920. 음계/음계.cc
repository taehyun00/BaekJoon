// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num[8];
    int a=0,d=0;
    for(int i = 0 ;i<8; i++){
        scanf("%d",&num[i]);
        if(num[i] == i+1) a++;
        else if (num[i] == 8-i) d++;
    }
    if(a == 8) printf("ascending");
    else if ( d == 8 ) printf("descending");
    else printf("mixed");

    return 0;
}