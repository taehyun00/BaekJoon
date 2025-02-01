// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int res;
    char ch[2] = {'A','B'};
    int flag = 0;
    int sum = 0;
    rop:
    if(flag == 2 ) goto end;
    for(int i = 1 ; i<=9; i++){
        printf("? %c %d\n",ch[flag],i); 
        fflush(stdout);
        
        scanf("%d",&res);
        
        if(res == 1){
            sum += i;
            flag += 1;
            goto rop;
        }
        
    }
    end:
    printf("! %d",sum); 

    return 0;
}