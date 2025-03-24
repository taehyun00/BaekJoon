#include <stdio.h>
#include <string.h>

int main() {
    char arr[10001] = "";  // arr를 빈 문자열로 초기화
    char temp[1000001];
    int sum = 0, num = 0;

    while (scanf("%s", temp) != EOF) {
        strcat(arr, temp); 
    }


    for (int i = 0; i < strlen(arr); i++) {
        if ('0' <= arr[i] && arr[i] <= '9') {
            num = num * 10 + (arr[i] - '0');
        }
        else if(arr[i] == ','){
            sum+=num;
            num = 0;
        }
    }
    
    sum += num;

    printf("%d\n", sum); 
    return 0;
}
