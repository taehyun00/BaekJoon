#include <stdio.h>

int main() {
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c%2 == 0 ){
        printf("%d",a);
        return 0;
    }
    else printf("%d",a^b);
    
    return 0;
}
