// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int h,u;
   scanf("%d %d",&h,&u);
   int m[u];
   int pl[h]={};
   int c=0;
   int s = 0 ;
   for(int q=0 ; q <h; q++){
       pl[q] = 0;
   }
   for(int i =0; i<u; i++){
       scanf("%d",&m[i]);
   }
   for(int i=0; i<u; i++){
       int now = m[i];
        int isp = 0;
        
       for(int i = 0; i<h; i++){
           if(pl[i] == now){
               isp = 1;
               break;
           }
       }
       
       if(isp == 1 ){
           continue;
       }
       
       if(c<h){
           pl[c++] = now;
           continue;
       }
       int index = 0,use =-1;
       for(int r = 0; r<h; r ++){
           int nc = 0 ;
           for(int b = i+1; b<u; b++){
               if(m[b] == pl[r]) break;
                nc++;
           }
           if(use < nc){
               use = nc;
               index = r;
           }
       }
       
       pl[index] = now;
       s++;
   }
    printf("%d",s);

    return 0;
}