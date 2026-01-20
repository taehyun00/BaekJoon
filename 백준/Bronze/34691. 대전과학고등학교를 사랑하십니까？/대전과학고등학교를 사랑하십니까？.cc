#include <stdio.h>
#include <string.h> 

int main() {
    while (1) {
        char arr[100];
        scanf("%s", arr);

        if (strcmp(arr, "end") == 0) {
            return 0;
        }
        else if (strcmp(arr, "animal") == 0) {
            printf("Panthera tigris\n");
        }
        else if (strcmp(arr, "tree") == 0) {
            printf("Pinus densiflora\n");
        }
        else if (strcmp(arr, "flower") == 0) {
            printf("Forsythia koreana\n");
        }
    }

    return 0;
}
