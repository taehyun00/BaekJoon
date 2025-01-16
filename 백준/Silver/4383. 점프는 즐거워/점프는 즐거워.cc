// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num;
    while(scanf("%d", &num) != EOF){
        int count = 0;
        if(num == 1){
            printf("Jolly\n");
        }
        int cases[num];
        int number[num];
        int flag = 0;
        for(int i = 0 ; i< num; i++){
            scanf("%d",&number[i]);
            cases[i]=i+1;
        }
        for(int j = 0 ; j<num-1; j++){
            flag = abs(number[j] - number[j+1]);
            for(int k=0; k<num-1; k++){
                if(flag == cases[k]) {
                    count++;
                    cases[k] = 0;
                }
            }
        }
        
        if(count == num-1) {
            if(num == 1){
                continue;
            }
            else printf("Jolly\n");
            }
        else printf("Not jolly\n");

    }
    return 0;
}