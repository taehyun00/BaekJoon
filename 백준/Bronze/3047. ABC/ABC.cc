#include <stdio.h>

int main() {
    int list[3];
    char cases[3];
    int temp=0;
    for(int i = 0 ; i<3; i++){
        scanf("%d",&list[i]);
    }
    for(int i = 2; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(list[j] > list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
  getchar();
  
  for(int i = 0 ; i<3; i++){
      scanf("%c",&cases[i]);
  }
  
 for(int k=0; k<3; k++){
     switch (cases[k]){
         case 'A':
            printf("%d ",list[0]);
            break;
        case 'B':
            printf("%d ",list[1]);
            break;
        case 'C':
            printf("%d ",list[2]);
            break;
     }
 }
    return 0;
}