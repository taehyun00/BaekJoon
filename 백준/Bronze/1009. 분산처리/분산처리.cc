// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t;
   scanf("%d",&t);
   long long int a,b;
   while(t--){
       scanf("%lld %lld",&a,&b);
       if(b == 1){
           if(a%10 != 0){
            printf("%lld\n",a%10);
           }
           else printf("10\n");
           
           continue;
       }
       long long int result = a;
       for(long long int i = 1; i<b; ++i){
           result =  (result * a)%10;
       }
       
       if(result == 0) result = 10;
       printf("%lld\n",result);
       }

    return 0;
}