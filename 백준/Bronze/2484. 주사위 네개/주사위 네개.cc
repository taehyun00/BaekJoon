#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int num[t];

    for (int i = 0; i < t; i++) {
        int flag = 0;
        int arr[4];
        int index = -1;


        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
        }

      
        for (int q = 0; q < 4; q++) {
            for (int w = q + 1; w < 4; w++) {
                if (arr[q] == arr[w]) {
                    flag++;
                    index = q;  
                }
            }
        }


        if (flag == 6) {
            
            num[i] = 50000 + arr[0] * 5000;
        }
        else if (flag == 3) {
            
            num[i] = 10000 + arr[index] * 1000;
        }
        else if (flag == 2) {
            int pair1 = 0, pair2 = 0;
            for (int a = 0; a < 4; a++) {
                for (int b = a + 1; b < 4; b++) {
                    if (arr[a] == arr[b]) {
                        if (pair1 == 0) pair1 = arr[a];
                        else if (pair1 != arr[a]) pair2 = arr[a];
                    }
                }
            }
            num[i] = 2000 + (pair1 + pair2) * 500;
        }

        else if (flag == 1) {
            
            num[i] = 1000 + arr[index] * 100;
        }
        else {
            
            int max = arr[0];
            for (int j = 1; j < 4; j++) {
                if (arr[j] > max) max = arr[j];
            }
            num[i] = max * 100;
        }
        


    }
    int max = 0;
    for(int i=0; i<t; i++){
        if(max < num[i]) max = num[i];
    }
    
    printf("%d",max);

    return 0;
}
