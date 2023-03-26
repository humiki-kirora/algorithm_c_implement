#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <cstring>
#include <cstdlib>

#ifdef __cplusplus
extern "C" {
#endif 

void 
merge_sort(int* array,int L,int R);

#ifdef __cplusplus
}
#endif 

#endif /*SORT_ALGORITHM_H*/