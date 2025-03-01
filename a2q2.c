#include <stdio.h>

int main() {
    int a, b, add, sub, mul, div, choice;
    

    printf("Enter first Number: ");
    scanf("%d", &a);
    
    printf("\nEnter Second Number: ");
    scanf("%d", &b);
    
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Subtraction"); 
    printf("\nEnter 3 for Multiplication"); 
    printf("\nEnter 4 for Division\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        add = a + b;
        printf("\nSum is %d", add);
    } else if (choice == 2) {
        sub = a - b;
        printf("\nSubtraction is %d", sub);
    } else if (choice == 3) {
        mul = a * b;
        printf("\nMultiplication is %d", mul);
    } else if (choice == 4) {
        div = a / b;
        printf("\nDivision is %d", div);
    } else {
        printf("Invalid Choice");
    }
    
    return 0;
}
