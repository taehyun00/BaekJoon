// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    int num;

    char ch[101],ch1[101];
    char cch[101],cch1[101];
    scanf("%d",&num);
    for(int i = 0; i<num; i++){
        scanf("%s %s",ch,ch1);
        if (strlen(ch) != strlen(ch1)) {
            printf("%s & %s are NOT anagrams.\n", ch, ch1);
            continue;
        }
        strcpy(cch,ch);
        strcpy(cch1,ch1);
        
        qsort(cch, strlen(cch), sizeof(char), cmpfunc);
        qsort(cch1, strlen(cch1), sizeof(char), cmpfunc);
        
        if(strcmp(cch,cch1) == 0){
            printf("%s & %s are anagrams.\n",ch,ch1);
        }
        else printf("%s & %s are NOT anagrams.\n",ch,ch1);
        

    }

    return 0;
}