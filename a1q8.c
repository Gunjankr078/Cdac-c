/*Write a C program to print table of number entered by user using printf and scanf 
functions.*/

#include<stdio.h>

int main(){
    int number;
    printf("Enter The Number:");
    scanf("%d",&number);
    
    printf("table of %d:\n",number);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
    return 1;
}