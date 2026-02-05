// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int point = 0;
    for(int i = 0; i < 10; i++){
        int num ;
        scanf("%d",&num);
        switch(num){
            case 1:
                point+=90;
                break;
            case 2:
                point+=180;
                break;
            case 3:
                point-=90;
                break;
        }
    }
    if(point < 0 ) point *= -1;
    switch(point%360){
        case 0 :
            printf("N");
            break;
        case 90:
            printf("E");
            break;
        case 180:
            printf("S");
            break;
        case 270:
            printf("W");
            break;
    }

    return 0;
}