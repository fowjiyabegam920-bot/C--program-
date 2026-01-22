#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    bill = units * 5;   // 1 unit = Rs.5

    printf("Total electricity bill = Rs. %.2f", bill);

    return 0;
}
