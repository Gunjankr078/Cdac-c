/*write a C program to print 5 integers in a row and then in different rows without using 
any loop.*/

#include <stdio.h>

int main() {

    for (int i = 0; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i <= 5; i++) {
        printf("%d\n",i);
    }

    return 0;
}
