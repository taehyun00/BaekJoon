#include <stdio.h>

int main()
{
    int arr[1001]={0,};
    int sum =0;
    int max=0;
    int maxint=0;
    for(int i = 0 ; i < 10; i++){
      int temp;
      scanf("%d",&temp);
      sum+= temp;
      arr[temp]++;
    }
    for(int i = 0 ; i < sizeof(arr)/sizeof(int); i++){
      if(max<arr[i]){
        max = arr[i];
        maxint = i;
      }
    }
    
    printf("%d\n%d",sum/10,maxint);
    
}