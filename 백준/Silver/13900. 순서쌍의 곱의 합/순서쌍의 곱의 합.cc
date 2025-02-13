// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    long long int sum = 0;
    long long int ans = 0;
    for(int i = 0 ; i < num; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    } 
    for(int j=0; j<num-1; j++){
        sum -= arr[j];
        ans += sum*arr[j];
    }
    printf("%lld",ans);
    return 0;
}