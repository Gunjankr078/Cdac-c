/*Write a C program that demonstrates the concept of variable scope by using local and 
global variables. Show how changes to a global variable affect the output in different 
functions.*/

#include<stdio.h>

int globalVar = 25;

int main(){
    printf("value of global variable: %d\n",globalVar);

    globalVar = 50;

    printf("Value After modification: %d\n", globalVar);

    int localVar = 55;
    printf("Value of Local Var %d\n", localVar);
    return 0;
}