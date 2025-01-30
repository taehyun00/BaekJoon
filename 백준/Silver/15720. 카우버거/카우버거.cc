#include<stdio.h>
int main(){
    int num[3];
    int b = 0, s = 0, d = 0;
    int min = 1001;
    int sum1 = 0, sum2 = 0, sum = 0;
    int flag = 0, count = 0, con = 0;
    int res = 0;

    scanf("%d%d%d", &num[0], &num[1], &num[2]);
    int ba[num[0]], sa[num[1]], da[num[2]];

    for (int i = 0; i < num[0]; i++) {
        scanf("%d", &ba[i]);
    }
    for (int i = 0; i < num[1]; i++) {
        scanf("%d", &sa[i]);
    }
    for (int i = 0; i < num[2]; i++) {
        scanf("%d", &da[i]);
    }

    // sum1 계산: 각 배열에 대한 합
    for (int i = 0; i < num[0]; i++) {
        sum1 += ba[i];
    }
    for (int i = 0; i < num[1]; i++) {
        sum1 += sa[i];
    }
    for (int i = 0; i < num[2]; i++) {
        sum1 += da[i];
    }


    min = num[0] < num[1] ? (num[0] < num[2] ? num[0] : num[2]) : (num[1] < num[2] ? num[1] : num[2]);


    for (int i = 0; i < min; i++) {

        for (int j = 0; j < num[0]; j++) {
            if (ba[j] > b) {
                b = ba[j];
                con = j;
            }
        }
        ba[con] = 0;
        sum += b;
        b = 0;
        con = 0;


        for (int j = 0; j < num[1]; j++) {
            if (sa[j] > s) {
                s = sa[j];
                con = j;
            }
        }
        sa[con] = 0;
        sum += s;
        s = 0;
        con = 0;


        for (int j = 0; j < num[2]; j++) {
            if (da[j] > d) {
                d = da[j];
                con = j;
            }
        }
        da[con] = 0;
        sum += d;
        d = 0;
        con = 0;

        sum = sum - (sum / 10);
        
        res += sum;
        sum = 0;
    }


    for (int i = 0; i < num[0]; i++) {
        sum2 += ba[i];
    }
    for (int i = 0; i < num[1]; i++) {
        sum2 += sa[i];
    }
    for (int i = 0; i < num[2]; i++) {
        sum2 += da[i];
    }

    printf("%d\n", sum1);
    printf("%d\n", res+ flag + sum2);

    return 0;
}
