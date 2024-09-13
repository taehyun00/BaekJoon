#include <stdio.h>
#include <string.h>

int main() {
    char octal[333336];  // 8진수를 입력받을 문자열
    scanf("%s", octal);  // 8진수 입력

    int len = strlen(octal);  // 입력된 문자열 길이
    int flag = 0;  // 처음 1이 출력될 때까지 앞자리 0을 생략하기 위한 플래그

    // 첫 번째 자리(8진수)의 경우는 앞에 0을 생략한 형태로 처리
    for(int i = 0; i < len; i++) {
        if(i == 0) {
            // 첫 번째 자리 숫자에 따라 2진수로 변환
            if(octal[i] == '0') {
                printf("0");
                return 0;  // 입력이 0일 경우 바로 종료
            } else if(octal[i] == '1') {
                printf("1");
            } else if(octal[i] == '2') {
                printf("10");
            } else if(octal[i] == '3') {
                printf("11");
            } else if(octal[i] == '4') {
                printf("100");
            } else if(octal[i] == '5') {
                printf("101");
            } else if(octal[i] == '6') {
                printf("110");
            } else if(octal[i] == '7') {
                printf("111");
            }
        } else {
            // 두 번째 자리 이후는 항상 3자리의 2진수로 변환
            if(octal[i] == '0') {
                printf("000");
            } else if(octal[i] == '1') {
                printf("001");
            } else if(octal[i] == '2') {
                printf("010");
            } else if(octal[i] == '3') {
                printf("011");
            } else if(octal[i] == '4') {
                printf("100");
            } else if(octal[i] == '5') {
                printf("101");
            } else if(octal[i] == '6') {
                printf("110");
            } else if(octal[i] == '7') {
                printf("111");
            }
        }
    }
    
    return 0;
}
