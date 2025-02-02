// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    float p = 0.000;
    int cases;
    int sum=0;
    scanf("%d",&t);
    for(int i = 0 ; i < t; i++ ){
        scanf("%d",&cases);
        float per = 100.0/cases;
        int arr[cases];
        for(int j = 0; j<cases;j++){
            scanf("%d",&arr[j]);
            sum += arr[j];
        }
        sum = sum/cases;
        
        for(int k = 0 ; k < cases; k++){
            if(arr[k]>sum) p += per;
        }
        printf("%.3f%%\n",p);
        
        p = 0;
        sum = 0;
    }

    return 0;
}