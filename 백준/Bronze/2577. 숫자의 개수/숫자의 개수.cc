// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int a,b,c;
    char arr[11];
    int count[10]={0,};
    scanf("%d %d %d",&a,&b,&c);
    int sum = a*b*c;
    sprintf(arr, "%d", sum);
    for(int i = 0; i<11; i++){
        if(arr[i] == '0') count[0]++;
        if(arr[i] == '1') count[1]++;
        if(arr[i] == '2') count[2]++;
        if(arr[i] == '3') count[3]++;
        if(arr[i] == '4') count[4]++;
        if(arr[i] == '5') count[5]++;
        if(arr[i] == '6') count[6]++;
        if(arr[i] == '7') count[7]++;
        if(arr[i] == '8') count[8]++;
        if(arr[i] == '9') count[9]++;
    }
    for(int i = 0; i<10; i++){
        printf("%d\n",count[i]);
    }
    return 0;
}