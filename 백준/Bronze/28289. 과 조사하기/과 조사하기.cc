// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int sw=0,ed=0,ai=0,f=0;
    scanf("%d",&num);
    
    for(int i = 0 ; i < num ; i ++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        
        switch(a){
            case 1:
                f++;
                break;
            case 2:
            case 3:
                switch(b){
                    case 1:
                    case 2:
                        sw++;
                        break;
                    case 3:
                        ed++;
                        break;
                    case 4:
                        ai++;
                        break;
                }
        }
    }
    printf("%d\n%d\n%d\n%d",sw,ed,ai,f);
    return 0;
}