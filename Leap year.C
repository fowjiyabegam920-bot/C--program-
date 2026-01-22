#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("It is a Leap Year");
    else
        printf("It is Not a Leap Year");

    return 0;
}
