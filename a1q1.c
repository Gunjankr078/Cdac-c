//Write a C program to define int, float, string and character variables also print their values in console.


#include<stdio.h>

int main(){
    int integerVar =25;
    float floatVar = 15.14;
    char charVar = 'A';
    char stringVar[50] = "Welcome! To The World Of C";

    printf("Integer Value: %d\n", integerVar);
    printf("Float Value: %2f\n",floatVar);
    printf("Char Value: %c\n",charVar);
    printf("String Value: %s",stringVar);
    

    return 0;
}