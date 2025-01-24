// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int test;
   scanf("%d",&test);
   int num[3];
   int temp = 0;
   int max = 0 ;
   for(int i = 0 ; i <test; i++){
       for(int j=0; j<3; j++){
           scanf("%d",&num[j]);
       }
       if(num[0] == num[1] && num[1] == num[2]){
           if(max < (10000 + num[0]*1000)){
               max = (10000 + num[0]*1000);
           }
       }
       else if(num[0] == num[1] && num[0] != num[2]){
           if(max < (1000 + num[0]*100)){
               max = (1000 + num[0]*100);
           }
       }
       else if(num[1] == num[2] && num[1] != num[0]){
           if(max < (1000 + num[1]*100)){
               max = (1000 + num[1]*100);
           }
       }
       else if(num[0] == num[2] && num[0] != num[1]){
            if(max < (1000 + num[0]*100)){
               max = (1000 + num[0]*100);
            }
       }
       
       else{
           for(int k=0; k<3; k++){
               for(int g = 0 ;g<2; g++){
                   if(num[g]>num[g+1]){
                       temp = num[g+1];
                       num[g+1] = num[g];
                       num[g] = temp;
                   }
               }
           }
           if(max < (num[2]*100)) max = (num[2]*100);
       }
   }
   printf("%d",max);

    return 0;
}