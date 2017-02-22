//
// Created by MGR on 22-02-2017.
//

#include <stdio.h>
#include "he_2202.h"


void he_2202_run(){
    jarvis();
    //test();
}

struct elem{
    int element;
    int energy;
};
void jarvis(){
    int testcase, lengh;
    int array[1000];
    scanf("%d",&testcase);
    struct elem e;
    while (testcase--){
        scanf("%d",&lengh);
        for (int i = 0; i < lengh; i++) {scanf("%d",&array[i]);}
            e.energy = energy(array[0]);
            e.element = array[0];
        for (int j = 0; j < lengh; j++) {
            if (energy(array[j]) < e.energy) {
                e.energy = energy(array[j]);
                e.element = array[j];
            }
        }
        printf("%d",e.element);

    }

}

int getEng(int num){

    if (num == 1) return 2;
    if (num == 2) return 5;
    if (num == 3) return 5;
    if (num == 4) return 4;
    if (num == 5) return 5;
    if (num == 6) return 6;
    if (num == 7) return 3;
    if (num == 8) return 7;
    if (num == 9) return 6;
    if (num == 0) return 4;
}
int energy(int num){
    int eng = 0;
    if( num == 0) return 4;
    while (num){
        eng = eng + getEng(num % 10);
        num = num / 10;
    }
    return eng;
}

int test(){
    printf("%d", energy(432));
}
