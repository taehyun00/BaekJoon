// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    int max = 0 ;
    int start = arr[0];
    
    for (int j = 1; j < num; j++) {
            if (arr[j] > arr[j - 1]) {
                if (arr[j] - start > max) {
                    max = arr[j] - start;
                }
            } else {
                start = arr[j];
            }
        }
    printf("%d",max);
    return 0;
}