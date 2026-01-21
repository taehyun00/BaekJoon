#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++){
        int count = 0 ;
        int arr[3];
        for(int j=0; j<3; j++){
            scanf("%d",&arr[j]);
        }
        for(int k=0; k<3; k++){
            if(arr[k] >= 10) count++;
        }
        switch(count){
            case 0:
                printf("%d %d %d\nzilch\n\n",arr[0],arr[1],arr[2]);
                break;
            case 1:
                printf("%d %d %d\ndouble\n\n",arr[0],arr[1],arr[2]);
                break;
            case 2:
                printf("%d %d %d\ndouble-double\n\n",arr[0],arr[1],arr[2]);
                break;
            case 3:
                printf("%d %d %d\ntriple-double\n\n",arr[0],arr[1],arr[2]);
                break;
        }
    }

    return 0;
}
