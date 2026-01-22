#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Attendance numbers:\n");

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
