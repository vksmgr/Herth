//
// Created by MGR on 19-02-2017.
//

#include <stdio.h>
#include <string.h>
#include "he_run.h"


//main function.
void runMe(){
    //ocurrence();
    countBit();
}

void ocurrence(){
    char ipString[20];
    int digit[10],i;
    for ( i = 10; i--;) digit[i] = 0;
    int length;
    gets(ipString);
    length = strlen(ipString);
    for (i = 0; i < length; ++i) {
        if (ipString[i] == '0')digit[0] = digit[0]+1;
        if (ipString[i] == '1')digit[1] = digit[1]+1;
        if (ipString[i] == '2')digit[2] = digit[2]+1;
        if (ipString[i] == '3')digit[3] = digit[3]+1;
        if (ipString[i] == '4')digit[4] = digit[4]+1;
        if (ipString[i] == '5')digit[5] = digit[5]+1;
        if (ipString[i] == '6')digit[6] = digit[6]+1;
        if (ipString[i] == '7')digit[7] = digit[7]+1;
        if (ipString[i] == '8')digit[8] = digit[8]+1;
        if (ipString[i] == '9')digit[9] = digit[9]+1;
    }
    for (i = 0; i < 10; i++)printf("%d %d\n",i,digit[i]);
}

void countBit(){
    int times, number, count;
    scanf("%d",&times);
    while (times){
        scanf("%d",&number);
        count = 0;
        while (number){
            number = number & (number-1);
            count++;
        }
        printf("%d\n", count);
        times--;
    }
}


