// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++){
        int counts,money;
        scanf("%d %d",&counts,&money);
        
        int sale=money;
        
        if(counts > 1){
            sale = counts*money - (counts-1)*2;
        }
        
        printf("%d %d\n%d\n",counts,money,sale);
    }

    return 0;
}
