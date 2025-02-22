#include <stdio.h>
#include <string.h>

int main() {
    char num[1000001];
    scanf("%s", num);
    
    int len = strlen(num);
    int d = len % 3; 
    int i = 0;

    if (d > 0) {
        int sum = 0;
        for (int j = 0; j < d; j++) {
            sum = sum * 2 + (num[i++] - '0'); 
        }
        printf("%d", sum); 
    }


    while (i < len) {
        int f = (num[i] == '1') ? 1 : 0;
        int s = (num[i+1] == '1') ? 1 : 0;
        int t = (num[i+2] == '1') ? 1 : 0;
        i += 3;

        switch (f) {
            case 1:
                switch (s) {
                    case 1:
                        switch (t) {
                            case 1: printf("7"); break;
                            case 0: printf("6"); break;
                        }
                        break;
                    case 0:
                        switch (t) {
                            case 1: printf("5"); break;
                            case 0: printf("4"); break;
                        }
                        break;
                }
                break;
            case 0:
                switch (s) {
                    case 1:
                        switch (t) {
                            case 1: printf("3"); break;
                            case 0: printf("2"); break;
                        }
                        break;
                    case 0:
                        switch (t) {
                            case 1: printf("1"); break;
                            case 0: printf("0"); break;
                        }
                        break;
                }
                break;
        }
    }

    return 0;
}
