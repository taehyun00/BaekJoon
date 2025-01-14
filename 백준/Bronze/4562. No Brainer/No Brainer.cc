// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int cases;
    scanf("%d",&cases);
    int brain,need;
    for(int i=0; i<cases; i++){
        scanf("%d %d",&brain,&need);
        if(brain>=need) printf("MMM BRAINS\n");
        else printf("NO BRAINS\n");
    }

    return 0;
}