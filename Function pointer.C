#include <stdio.h>

// Function declarations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? (a / b) : 0; }

int main() {
    int a, b, choice;
    
    // Array of function pointers
    int (*operation[])(int, int) = { add, subtract, multiply, divide };

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Calculator Menu ---\n");
    printf("0. Addition\n");
    printf("1. Subtraction\n");
    printf("2. Multiplication\n");
    printf("3. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 4) {
        int result = operation[choice](a, b);  // call function using pointer
        printf("Result = %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}