// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,k;
    scanf("%d %d",&num,&k);
    if(num == 0 ) {
        printf("0");
        return 0;
    }
    int box[num];
    int sum=0;
    int count=1;
    for(int i = 0 ; i < num ; i++){
        scanf("%d",&box[i]);
    }
    
    for(int i = 0; i < num; i++) {
        if(sum + box[i] > k) { 
            count++; 
            sum = box[i]; 
        } else {
            sum += box[i];
        }
    }
    
    printf("%d",count);
    return 0;
}