/*Write a C program with static local variable named counter which should count from 1 
to 5.*/ 

#include<stdio.h>
int i = 1;
int main(){
    for ( i = 1; i <= 5; i++) {
        printf("counter:%d\n",i);
    }
    return 0;
}

