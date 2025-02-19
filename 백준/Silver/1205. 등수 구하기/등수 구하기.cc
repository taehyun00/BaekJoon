// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,score,p;
    scanf("%d %d %d",&n,&score,&p);
    if(n == 0 && score == 0){
        printf("1");
        return 0;
    }
    int arr[p];
    for(int i = 0; i<p; i++){arr[i] = 0 ;};
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    if(n == p && score == arr[n-1]){
        printf("-1");
        return 0;
    }
    if(n == p && arr[p-1]>score){
        printf("-1");
        return 0;
    }
    
    int num=0;
    for(int i = 0; i<p; i++){
        if(score == 0 ){
            if(arr[p-1] == 0 && n == p) {
                printf("-1");
                return 0;
            }
            if(arr[i] == 0){
                num = i+1;
                break;
            }
        }
        else if(score >= arr[i] && i == 0){
            num = 1;
            break;
        }
        else if (score<arr[i-1] && score>=arr[i]){
            if(score == arr[i-1]) num = i;
            else num = i+1;
        }
        
            

    }

    printf("%d",num);
    return 0;
}