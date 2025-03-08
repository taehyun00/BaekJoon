#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];


    for (int i = 0; i < num; i++) {
        arr[i] = i + 1;
    }

    int size = num;
    while (size > 0) {
        printf("%d ", arr[0]);

        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }

        if (size > 1) { 
            int temp = arr[0]; 
            for (int j = 0; j < size - 2; j++) {
                arr[j] = arr[j + 1]; 
            }
            arr[size - 2] = temp; 
        }

        size--;
    }

    return 0;
}
