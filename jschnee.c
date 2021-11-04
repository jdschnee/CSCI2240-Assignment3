#include <stdio.h>
#include <stdlib.h>
#include "jschnee.h"

void toBase(int val, unsigned base){
    int r,q;
    r = val % base;
    q = val / base;

    if(val >= base)
       toBase(q, base);

    if(r < 10){
        printf("%d",r);
    }else if(r > 9 && r < 36){
        putchar(55 + r);
    }else{
        printf("(%d)",r);
    }
}

int getRadix(){
    unsigned int radix, count;

    while(count<1){
        printf("INPUT ONE POSITIVE INTEGER BELOW THAT IS BETWEEN 2 AND 16 (BINARY-HEXIDECIMAL) AND THIS WILL BE YOUR RADIX OR BASE(Press Enter After Integer Input)\n");
        count += scanf("%u", &radix);
        while ((getchar()) != '\n');
    }
    return radix;
}

void swapIntoOrder(int *one, int *two, int *three){
    int min;
    min = MIN(*one,*two);
    min = MIN(MIN(*one,*three), min);

    if(*two == min){
        SWAP(*one,*two);
    }else if(*three == min){
        SWAP(*one,*three);
    }
    min = MIN(*two,*three);
    if(*three == min) {
        SWAP(*two,*three);
    }
}

void getThreeInts(){
    int one, two, three, count;

    while(count<3){
        one = two = three = count = 0;
        printf("INPUT THREE INTEGERS BELOW (Press Enter After Each Integer Input)\n");
        count += scanf("%d", &one);
        count += scanf("%d", &two);
        count += scanf("%d", &three);
        while ((getchar()) != '\n');
    }

    swapIntoOrder(&one,&two,&three);
    printf("==>\t%d, %d, %d\n\n", one, two, three);

    unsigned int radix = getRadix();
    printf("BASE (10): %d, %d, %d \t==>\t BASE (%d): ", one, two, three, radix);
    toBase(one,radix); putchar(','); putchar(' ');
    toBase(two,radix); putchar(','); putchar(' ');
    toBase(three,radix); putchar('\n');
}
