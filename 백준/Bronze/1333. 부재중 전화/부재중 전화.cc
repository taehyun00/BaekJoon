// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,l,d;
    scanf("%d %d %d",&n,&l,&d);
    
    int t=0;
    for(int i = 0 ; i < n; i++){
        
        
        
        t += l;
        for(int i = t; i < t+5; i++){
   
            if(i%d == 0 ){
                printf("%d",i);
                return 0;
            }
        }
        t += 5;
    }
            
        while (1) {
            if (t % d == 0) {
                printf("%d", t);
                return 0;
            }
        t++;
    }
        
    return 0;
}