// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int x,y,x1,y1;
    int num = 0;
    int flag = 0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1){
                if(flag == 0){
                    x=i;
                    y=j;
                    flag = 1;
                }
                else{
                    x1=i;
                    y1=j;
                }
            }
        }
    }
    num = abs(x1-x) + abs(y1-y);

    printf("%d",num);
    return 0 ;
}