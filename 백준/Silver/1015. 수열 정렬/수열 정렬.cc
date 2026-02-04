#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];
    int rearr[num];
    int used[num];

    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
        rearr[i] = arr[i];
        used[i] = 0;
    }

 
    for(int j = 0; j < num; j++){
        for(int k = 0; k < num - 1; k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }


    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(rearr[i] == arr[j] && used[j] == 0){
                printf("%d ", j);
                used[j] = 1;
                break;
            }
        }
    }

    return 0;
}
