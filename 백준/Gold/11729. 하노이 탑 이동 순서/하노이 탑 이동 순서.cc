#include <stdio.h>
int sum = 2; 
void hanoi(int n,char a, char b, char c)

{

    if(n==1)

    {

        printf("%c %c\n",a,c);

    }

    else

    {

        hanoi(n-1,a,c,b);

        printf("%c %c\n",a,c);

        hanoi(n-1,b,a,c);

    }

}
int main()

{

    int n;
    int sum=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        sum = sum*2;
    }
    printf("%d\n",sum-1);
    hanoi(n,'1','2','3');

    return 0;

}