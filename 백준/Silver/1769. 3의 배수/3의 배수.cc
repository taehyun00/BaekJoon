// Online C compiler to run C program online

#include <stdio.h>

int main() {

    char num[1000001];

    scanf("%s",&num);

    int i=0,sum=0,sum1=0;

    int flag=0;

    while(num[i]){

        sum += num[i]-'0';

        i++;

    }

    if(i == 1 ){

        flag =0;

    }

    else flag++;

    if(sum < 10 ){

        printf("%d\n",flag);

        if(sum%3 == 0 ) printf("YES\n");

        else printf("NO\n");

        

        return 0;

    }

    while(sum > 9){

        sum1 = 0;

        flag++;

        while(sum != 0 ){

            sum1 += sum%10;

            sum = sum/10;

        }

        sum = sum1;

    } 

    if(sum < 10 ){

        printf("%d\n",flag);

        if(sum%3 == 0 ) printf("YES\n");

        else printf("NO\n");

        

        return 0;

    }

    return 0;

}