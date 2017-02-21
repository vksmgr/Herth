//
// Created by MGR on 21-02-2017.
//

#include <stdio.h>
#include "he_run.h"
int max_min[2];

void HE_2102_RUN(){
    min_max();
}



/*
 * problem : Given an array of integers .
 * Check if all the numbers between minimum and maximum number in array exist's within the array .
 *
 * Methodology : First find max min from an array.
 * */

//find max min
int* f_max_min(int* array, int len){
    int max = 0, min = 1;
    max_min[max] = max_min[min] = array[0];
    for (int i = 0; i < len; i++) {
        if ( max_min[max] < array[i]) max_min[max] = array[i];
        if ( max_min[min] > array[i]) max_min[min] = array[i];
    }
    return &max_min;
}


int min_max(){
    int N, array[100], *max_min, yes = 0, no = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) { scanf("%d", &array[i]);}
    max_min = f_max_min(array, N);
    for (int j = 0; j <= max_min[0]; j++) {
        if(search(array[j], array, N)) yes = 1;
        else no = 1;
    }
    if (no == 1 )printf("NO");
    if ( yes == 1)printf("YES");
    //printf("Max : %d, Min : %d\n",*max_min, *(max_min + 1));
}

int search(int elem, int* array, int len){
    for (int i = 0; i < len; i++) {
        if(elem == array[i])return 1;
    }
    printf("%d", elem);
    return 0;
}


