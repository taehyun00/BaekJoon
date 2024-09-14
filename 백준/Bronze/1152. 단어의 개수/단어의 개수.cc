#include <stdio.h>

int main() {
    int count = 0, i = 0;
    char str[1000001] = {0,};
    
    // 문자열 입력 받기
    scanf("%[^\n]s", str);
    
    // 맨 앞의 공백을 제외하고 시작
    while (str[i] == ' ') i++;
    
    // 만약 문자열이 공백으로만 이루어져 있다면 0 출력
    if (str[i] == '\0') {
        printf("0\n");
        return 0;
    }
    
    // 단어 개수를 세는 로직
    while (str[i] != '\0') {
        if ((str[i] == ' ') && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
        i++;
    }
    
    // 첫 번째 단어를 카운트에 추가
    count++;
    
    printf("%d\n", count);
    
    return 0;
}
