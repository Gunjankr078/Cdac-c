/*Initialise and assign integer values to 2 variables named x and y. Write a C code to swap 
their values without using any other variable. Print the values before and after 
swapping.*/

#include<stdio.h>
void main(){
    int a,b;
    printf("entered first Number :");
    scanf("%d", &a);
    printf("entered second Number :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Afterswapping firstNumber is: %d ",a);
    printf("\nAfterswapping  second Number is: %d ",b);

}