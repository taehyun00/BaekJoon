// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i = 0 ; i < num ; i++){
        int t;
        scanf("%d",&t);

        int arr[t];
        bool flag = false;

        for(int j=0; j < t; j++){
             scanf("%d",&arr[j]);
        }
        
        for(int j = 1; j < t; j++){
            if(arr[j] < 2 * arr[j-1]){
                flag = true;
                break;
            }
        }

        printf("Denominations: ");
        for(int k = 0 ; k < t; k++){
            printf("%d ",arr[k]);
        }
        printf("\n");

        if(flag == false){
            printf("Good coin denominations!\n");
        }
        else{
            printf("Bad coin denominations!\n");
        }
        printf("\n");
    }
    return 0;
}
