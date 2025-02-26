// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char arr[101];
    scanf("%s",arr);
    int count=0;
    char gum[10] ={'C','A','M','B','R','I','D','G','E'};
    
    for(int i = 0; i< strlen(arr); i++){
        for(int j = 0 ; j<10; j++){
            if(arr[i] == gum[j]) count++;
        }
        if(count == 0) printf("%c",arr[i]);
        
        count = 0;
        
    }

    return 0;
}