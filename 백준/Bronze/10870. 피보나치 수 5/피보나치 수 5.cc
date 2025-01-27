#include<stdio.h>
int main(){
    int num[21] ={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,};
    for(int i = 18; i<=20; i++){
        num[i] = num[i-1] + num[i-2];
    }
    int n;
    scanf("%d",&n);
    printf("%d",num[n]);
    return 0;
}