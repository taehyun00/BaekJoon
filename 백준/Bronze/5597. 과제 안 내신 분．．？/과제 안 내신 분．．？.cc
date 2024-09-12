#include <stdio.h>

int main() {
    int stu[31], check[31] = {0,};
    for(int i = 0; i < 31; i++){
        stu[i] = i ; 
    }
    int num[28];
    for(int j = 0; j < 28; j++){
        scanf("%d", &num[j]);  // &num[j]로 수정
    }
    for(int k = 0; k < 28; k++){  // k 범위를 28로 제한
        for(int t = 0; t < 31; t++){
            if(num[k] == stu[t]) check[t] = 1;  // check[t]로 수정
        }
    }
    
    for(int e = 1; e < 31; e++){
        if(check[e] == 0)  // 비교 연산자로 수정
            printf("%d\n", e);
    }
    return 0;
}
