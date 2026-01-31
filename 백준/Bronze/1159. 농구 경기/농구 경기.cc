// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int flag = 0;
    scanf("%d",&num);
    char arr[num][31];
    int count[123]={0,};
    for(int i = 0; i<num; i++){
        scanf("%s",arr[i]);
        int ctoi = arr[i][0];
        count[ctoi]++;
    }
    for(int j=97; j<123; j++){
        if(count[j] >= 5) {
            printf("%c",j);
            flag++;
            
        }
    }
    if(flag == 0 ) printf("PREDAJA");

    return 0;
}