// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char a[10001],b[10001];
    scanf("%s %s",a,b);
    
    long long int sum = 0 ;
    
    int al = strlen(a);
    int bl = strlen(b);
    
    for(int i = 0 ; i < al; i++){
        for(int j=0; j<bl; j++){
            sum+= (a[i]-'0') * (b[j]-'0');
        }
    }
    printf("%lld",sum);


    return 0;
}