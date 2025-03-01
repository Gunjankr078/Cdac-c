/*Write a C program to print the size (in bytes) of different data types (int, float, double, 
char) using the “sizeof” operator. */
#include<stdio.h>
int main(){
    printf("size of int: %zu bytes\n", sizeof(int));
    printf("size of int: %zu bytes\n", sizeof(float));
    printf("size of int: %zu bytes\n", sizeof(double));
    printf("size of int: %zu bytes\n", sizeof(char));

    return 0;

}