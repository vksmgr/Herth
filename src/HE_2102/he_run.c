//
// Created by MGR on 21-02-2017.
//

#include <stdio.h>
#include "he_run.h"

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
    int max_min[2];
    max_min[0] = max_min[1] = array[0];
    for (int i = 0; i < len; ++i) {
        if ( max_min[0] < array[i]) max_min[0] = array[i];
        else if (max_min[1] > array[i]) max_min[1] = array[i];
    }
    return &max_min;
}

int min_max(){
    int N, array[100], *max_min;
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) { scanf("%d", &array[i]);}
    max_min = f_max_min(array, N);
    printf("Max : %d, Min : %d\n",*max_min, *max_min+1);


}


