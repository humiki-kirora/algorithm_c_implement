#include "sort.h"

int main(){

    int s[6] = {4,3,6,1,2,5};

    printf("test:\n");
    for(int i = 0; i < 6; i ++){
        printf("%d ",s[i]);
    }
    printf("\n");

    merge_sort(s,0,5);

    printf("merge_sort:\n");
    for(int i = 0; i < 6; i ++){
        printf("%d ",s[i]);
    }


    return 0;
}