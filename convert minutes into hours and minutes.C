#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", remainingMinutes);

    return 0;
}
