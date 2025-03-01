#include<stdio.h>

int main(){
    int x = 5;
    int y;


    printf("initial value: x = %d\n", x);
    

    y = ++x;
    printf("Pre-Increment:\n x = %d, y = %d\n", x, y);

    x = 6;
    printf("reset the value of x = %d\n", x);

    y = x++;
    printf("post increment:\n x = %d, y = %d", x, y);
    return 0;
}