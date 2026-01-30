// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,y,w,h;
    int min=999;
    int reach[4] = {0,0,0,0};
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if((w/2) >= x)
        reach[0] = x;
    else
        reach[1] = w - x;
    
    if((h/2) >= y)
        reach[2] = y;
    else
        reach[3] = h - y;
    
    for(int i = 0 ; i < 4; i++){
        if(reach[i] == 0) continue;
        else if(reach[i] != 0){
            if(min>reach[i]){
                min = reach[i];
            }
        }
    }
    printf("%d",min);
    return 0;
}