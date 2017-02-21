//
// Created by MGR on 20-02-2017.
//


#include <stdio.h>
#include <string.h>
#include "he_run.h"

void runHE(){
    //taggle();
    //product();
    //printf("%d",divisible());
    //dimention();

    //factorial
    //factorial();

    //stop processing
    //stopProc();

    //magic word
    magic_word();
}


// taggle

void taggle(){
    char string[100];
    int len;

    gets(string);
    len = strlen(string);
    for (int i = 0; i < len; ++i) {
        if(string[i] >= 65 && string[i] <= 96)printf("%c",string[i]+32);
        else if(string[i] >= 96)printf("%c",string[i]-32);
    }

}


//find product of the elements

void product(){
    long int len = 1000;
    long int array[1001];
    long int product = 1;
    scanf("%d",&len);
    for (int i = 0; i < len; ++i) {scanf("%d",&array[i]);}
    for (int j = 0; j < len; ++j) {
        product = mod(product * array[j]);
    }
    printf("%d", product);
}
int mod(int num){
    int modNum = 1000000000+7;
    return num % modNum;
}


//number of divisible
int divisible(){
    int l, r, k, count;
    scanf("%d%d%d",&l,&r, &k);
    for (int i = l; i <= r ; ++i) {
        if(i % k == 0)count ++;
    }
    return count;
}

//image dimention
int dimention(){
    int L, number;
    int windth[1000], height[1000];
    scanf("%d",&L);
    scanf("%d",&number);
    for (int i = 0; i < number; ++i) {
        scanf("%d %d", &windth[i], &height[i]);
    }
    for (int i = 0; i < number; ++i) {
        if (windth[i] < L || height[i] < L) printf("UPLOAD ANOTHER\n");
        else if(windth[i] == height[i]) printf("ACCEPTED\n");
        else printf("CROP IT\n");
    }
}

//factorial
int factorial(){
    int num, fact = 1;
    scanf("%d",&num);
    for (int i = 1; i <= num; ++i) {
        fact = fact * i;
    }
    printf("%d",fact);
}


//stop processing

void stopProc(){
    int num, flag = 1;
    while (flag){
        scanf("%d",&num);
        if(num == 42)break;
        printf("%d\n",num);
    }
}



//magic word
void  magic_word(){
    int T, length;
    char string[500];
    scanf("%d",&T);

    for(int j = 0; j < T ; j++){
        scanf("%d", &length);
        scanf("%s",string);
        for (int i = 0; i < length; ++i) {
            convert(string[i]);
        }
    }
}

void convert(int ch){
    //printf("\n * %d", ch);
    if (is_prime(ch))printf("%c",ch);
    else printf("%c",nearest_prime(ch));
}

int is_prime(int num){
    int i,count=0;
    for(i=2;i<=num/2;i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }
    if(count==0 && num!= 1) return 1;
    else return 0;
}

int nearest_prime(int num){
    int count1 = 0,count2 =0, true = 1, num1, num2;
    num1 = num2 = num;
    while(true){
        count1++ ;
        if (is_prime(++num1)) break;
    }
    while(true){
        count2++ ;
        if (is_prime(--num2)) break;
    }
    if(count1 == count2) return num2;
    else if (count1 < count2)return num1;
    else return num2;

}
