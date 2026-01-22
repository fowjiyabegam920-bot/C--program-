#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 35)
        printf("Result: PASS");
    else
        printf("Result: FAIL");

    return 0;
}
