#include "sort.h"

void 
merge_sort(int* array,int L,int R){

    if ( L == R ){
        return;
    }

    int split = (R - L) / 2;

    //L型の分割・マージ
    merge_sort(array,L, L + split);

    //R側の分割・マージ
    merge_sort(array,L + split + 1,R);

    //マージソート
    int *start, *l_merge, *r_merge;

    start = array + L;
    int l_count = split + 1;
    int r_count = R - (L + split);
    int current_l = 0;
    int current_r = 0;

    l_merge = (int *)malloc(l_count * sizeof(int));
    memcpy(l_merge, start, l_count * sizeof(int));

    r_merge = (int *)malloc(r_count * sizeof(int));
    memcpy(r_merge,start + l_count,r_count * sizeof(int));

    while(true){

        if(current_l == l_count){
            memcpy(start,r_merge + current_r, (r_count - current_r) * sizeof(char));
            break;
        }
        
        if(current_r == r_count){
            memcpy(start,l_merge + current_l, (l_count - current_l) * sizeof(char));
            break;
        }

        
        if(l_merge[current_l] > r_merge[current_r]){
            start[0] = r_merge[current_r];
            current_r ++;
        }
        else{
            start[0] = l_merge[current_l];
            current_l ++;
        }

        start ++;
    }

    free(l_merge);
    free(r_merge);


    return;

}
