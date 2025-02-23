// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int i;
    int arr[11]={0,};
    int count[11] ={0,};
    scanf("%d",&num);
   for(i = 0; num>0; i++){
        arr[i] = num%10;
        num = num/10;
    }
    for(int j=0; j < i; j++) {
        count[arr[j]] += 1;
    }

    for(i=9; i >= 0; i--) {
        for(int j=0; j < count[i]; j++) {
            printf("%d", i);
        }
    }

    return 0;
}