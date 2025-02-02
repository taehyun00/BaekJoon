// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int cases;
    scanf("%d",&cases);
    int t[cases][3];
    int flag=0;
    int count = 0;
    for(int i = 0 ; i< cases; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&t[i][j]);
        }
    }
    
    for(int i = 0 ; i< 3; i++){
        for(int j=0; j < cases; j++){
            flag = t[j][i];

            for(int w=0; w < cases; w++){
                if(j == w) continue;
                if(flag == t[w][i]){ 
                    t[w][i] = 0; 
                    count++;
                }
            }
            if(count != 0 ){
                t[j][i] = 0;
                count = 0;
            }
        }
    }
    
    int sum=0;
    for(int i = 0 ; i< cases; i++){
        for(int j = 0; j < 3; j++){
            sum = sum + t[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    
    
    return 0;
}