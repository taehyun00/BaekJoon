// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            printf("%d ",a[j][k]+b[j][k]);
        }
        printf("\n");
    }
    return 0;
}

