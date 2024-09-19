#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    int freq[26] = {0};  // 각 알파벳의 빈도수를 저장하는 배열
    int max_freq = 0;    // 최대 빈도를 저장할 변수
    char result = '?';   // 최종 결과를 저장할 변수, 같은 빈도면 '?'로 표시
    
    // 문자열 입력받기
    fgets(s, 1000001, stdin);

    // 모든 문자를 대문자로 변환하고 빈도 카운트
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  // 소문자를 대문자로 변환
        }
        if(s[i] >= 'A' && s[i] <= 'Z') {
            freq[s[i] - 'A']++;  // 알파벳 빈도 카운트
        }
    }

    // 빈도 배열에서 최대 빈도 찾기
    for(int i = 0; i < 26; i++) {
        if(freq[i] > max_freq) {
            max_freq = freq[i];  // 새로운 최대 빈도
            result = 'A' + i;    // 해당 알파벳
        } else if(freq[i] == max_freq) {
            result = '?';  // 최대 빈도가 여러 개일 경우
        }
    }

    // 결과 출력
    printf("%c\n", result);

    return 0;
}
