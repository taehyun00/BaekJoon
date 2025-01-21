// Online C compiler to run C program online
#include <stdio.h>
int dp[12] = {0,1,2,4,7};

int pl(int x){
    if (x == 0) return 0 ;
    if (dp[x] != 0) return dp[x];
    return dp[x] = pl(x - 3) + pl(x - 2) + pl(x - 1);
}
int main() {

   int num;
   scanf("%d",&num);
   
   int t;
   for(int i = 0 ; i < num ; i++){
       scanf("%d",&t);
       printf("%d\n",pl(t));
       
   }

    return 0;
}